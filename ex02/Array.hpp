#pragma once

#include <iostream>
#include <string>

template <typename T>

class Array{
private:
	unsigned int _size;
	T *_array;
public:
	Array() : _size(0), _array(new T[0]){}

	Array(unsigned int n) : _size(n), _array(new T[n]){}

	Array(Array &array) : _size(array._size), _array(new T[_size]){
		for (unsigned int i = 0; i < _size; i++)
			this->_array[i] = array._array[i];
	}

	~Array(){
		delete[] this->_array;
	}

	Array &operator=(Array &array){
		for (unsigned int i = 0; i < _size && i < array._size; i++)
			this->_array[i] = array._array[i];
		return *this;
	}

	T &operator[](unsigned int i)
	{
		if (i >= _size)
			throw (OutOfBoundsException());
		else
			return (_array[i]);
	}

	unsigned int size(){
		return _size;
	}
class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "OutOfBoundsException: the index is out of bounds";
		}
	};
};
