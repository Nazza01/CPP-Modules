/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:37:16 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/04 10:41:22 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>

template <typename T>
class Array
{

private:
	T			*_head;
	std::size_t	_size;

public:
	/**
	 * @brief	OCF - Default Constructor
	**/
	Array(void): _head(NULL), _size(0)	{}

	/**
	 * @brief	OCF - Copy Constructor
	 * @param	other	The other Array object to assign
	**/
	Array(const Array &other): _head(NULL) {
		*this = other;
	}

	/**
	 * @brief	OCF - Destructor
	**/
	~Array(void)
	{
		delete[] this->_head;
	}

	/**
	 * @brief	OCF - Copy Assignment Operator
	 * @param	other	The other object of the same type being reassigned as needed
	**/
	Array &operator=(const Array &other)
	{
		if (this == &other)
			return *this;
		if (this->_size != other._size)
		{
			if (this->_head != NULL)
				delete[] this->_head;
			this->_head = new T[other._size];
			this->_size = other.size();
		}
		for	(std::size_t i = 0; i < this->_size; ++i)
		{
			this->_head[i] = other[i];
		}
		return *this;
	}

//	EX00 Functions
	/**
	 * @brief	Unsigned int constructor
	 * Intialises _head and _size to their respective values
	 * @param	n	Size of the array to be used when allocating memory, and
	 * setting class members
	**/
	Array(unsigned int n)	: _head(new T[n]), _size(n)	{}

	/**
	 * @brief	Overloads the [] operator
	 * @param	index	The index of the array to perform the operator on
	 * @return	If the index is out of bounds, then it will throw an out of
	 * bounds error. Otherwise, it will return the element at the head of the
	 * array using the index.
	**/
	T	&operator[](std::size_t index)
	{
		if (index >= this->_size)
			throw Array::InvalidIndexException();
		else
			return this->_head[index];
	}
	
	/**
	 * @brief	Overloads the [] operator (const typing)
	 * @param	index	The index of the array to perform the operator on
	 * @return	If the index is out of bounds, then it will throw an out of
	 * bounds error. Otherwise, it will return the element at the head of the
	 * array using the index.
	**/
	const T	&operator[](std::size_t index) const 
	{
		if (index >= this->_size)
			throw Array::InvalidIndexException();
		else
			return this->_head[index];
	}
	
	/**
	 * @brief	Obtains the size of the array
	**/
	std::size_t	size(void) const
	{
		return this->_size;
	}

	/**
	 * @brief	Throws an invalid index exception when this is called for out
	 * of bounds cases
	**/
	class InvalidIndexException : public std::exception 
	{
		public:
			const char* what() const throw() 
			{
				return "Invalid index: is larger than _size or less than 0";
			}
	};

};

#endif