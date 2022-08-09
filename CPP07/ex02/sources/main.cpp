/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:23:44 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/04 14:09:53 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <cstdlib>
#include <iostream>

#define MAX_VAL 750
static void FtTester(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
}

static void indepth(void)
{
	Array<int> arrInt(5);
	Array<char> arrChar(5);
	Array<std::string> arrString(3);

	arrInt[0] = 10;
	arrInt[1] = 11;
	arrInt[2] = 12;
	arrInt[3] = 13;
	arrInt[4] = 14;

	arrChar[0] = 'a';
	arrChar[1] = 'b';
	arrChar[2] = 'c';
	arrChar[3] = 'd';
	arrChar[4] = 'e';

	arrString[0] = "hello";
	arrString[1] = "world";
	arrString[2] = ":D";

	std::cout << "\n========== BASIC TESTS ==========\n" << std::endl;

	std::cout << "INT ARRAY:" << std::endl;
	std::cout << "size: " << arrInt.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrInt.size(); ++i) 
	{
		std::cout << arrInt[i] << std::endl;
	}
	std::cout << "\nCHAR ARRAY:" << std::endl;
	std::cout << "size: " << arrChar.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrChar.size(); ++i)
	{
		std::cout << arrChar[i] << std::endl;
	}

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i)
		std::cout << arrString[i] << std::endl;

	std::cout << "\n========== EXCEPTIONS ==========\n" << std::endl;

	try {
		std::cout << arrString[1] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << arrString[-1] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << arrString[5] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n========== COPY CONSTRUCTOR (DEEP) ==========\n" << std::endl;

	Array<std::string> copy(arrString);

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i)
		std::cout << arrString[i] << std::endl;

	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy.size(); ++i)
		std::cout << copy[i] << std::endl;

	std::cout << "\n----- change string array[2] to \":(\"-----" << std::endl;
	arrString[2] = ":(";

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i)
		std::cout << arrString[i] << std::endl;

	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy.size(); ++i)
		std::cout << copy[i] << std::endl;

	std::cout << "\n========== ASSIGNMENT OPERATOR (DEEP) ==========\n" << std::endl;

	Array<std::string> copy2(5);

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i)
		std::cout << arrString[i] << std::endl;

	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy2.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy2.size(); ++i)
		std::cout << copy2[i] << std::endl;

	std::cout << "\n----- copy = string array -----" << std::endl;
	copy2 = arrString;

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i)
		std::cout << arrString[i] << std::endl;

	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy2.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy2.size(); ++i)
		std::cout << copy2[i] << std::endl;

	std::cout << "\n----- change string array[2] to \":D\"-----" << std::endl;
	arrString[2] = ":D";

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i)
		std::cout << arrString[i] << std::endl;

	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy2.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy2.size(); ++i)
		std::cout << copy2[i] << std::endl;
}

int    main(void)
{
	int choice = 1;
	while (choice != 2)
	{
		std::cout << "Which test would you like to run?" << std::endl;
		std::cout << "\t0 for 42 supplied tester" << std::endl;
		std::cout << "\t1 for a more thorough tester" << std::endl;
		std::cout << "\t2 to exit" << std::endl;
		std::cout << "PROMPT> ";
		std::cin >> choice;
		switch (choice)
		{
		case 0:
			std::cout << "Running 42 supplied tester" << std::endl;
			FtTester();
			break;
		case 1:
			std::cout << "Running a thorough tester" << std::endl;
			indepth();
			break;
		case 2:
			return 0;
		default:
			std::cout << "Type the following to run the following tests:" << std::endl;
			std::cout << "\t0 for 42 supplied tester" << std::endl;
			std::cout << "\t1 for a more thorough tester" << std::endl;
			std::cout << "\t2 to exit" << std::endl;
			break;
		}
	}
	return 0;
}
