/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:03:08 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/01 19:16:01 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

/*
From: https://en.cppreference.com/w/cpp/language/reinterpret_cast

reinterpret_cast<type>(expression) does not compile any CPU instructions unless 
when converting between integers and pointers. It is a compile time directive
that instructs the compiler to treat the (expression) portion as if it had the
type <type>
*/
uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main(void)
{
	Data		*data	= new Data;												//	Allocating memeory for a new Data structure type
	uintptr_t	rawSer = serialize(data);										//	Using serialise to store the casted uintptr struct
	Data		*rawDes	= deserialize(rawSer);									//	Deserialising the raw serialisation to obtain back the data

	data->number = 2;															//	Using the data struct to store some data inside of it
	
	std::cout << "Contents of each object" << std::endl;
	std::cout << "Data: \t\t" << data->number << std::endl;						//	Outputs the number contained at data->number memory address
	std::cout << "Deserialize: \t" << rawDes->number << std::endl;				//	Outputs the number contained at rawDes->number memory address
	std::cout << "Raw Data: \t" << "Not Applicable" << std::endl;				//	Doesn't apply as it does not contain a Data structure as it is a uintptr_t struct type
	
	std::cout << "Memory Address" << std::endl;
	std::cout << "Data: \t\t" << data << std::endl;								//	Outputs the memory address contained at data
	std::cout << "Deserialize: \t" << rawDes << std::endl;						//	Outputs the memory address contained at rawDes (should be the same as above if implemented correctly)
	std::cout << "Raw Data: \t" << rawSer << std::endl;							//	Outputs the deserialised data as part of the deserailised function

	delete data;
	
	return 0;
}
