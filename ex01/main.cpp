#include "iter.hpp"
#include <iostream>

template <typename T>
void	add(T &i)
{
	i += 2;
}

int main( void ) {
	int length = 6;

	//---------INT ARRAY------------

	int i_array[length];

	for (int x = 0; x < length; x++)
		i_array[x] = 9 + x;

	std::cout << "Before iter: ";
	for (int x = 0; x < length; x++)
		std::cout << " " << i_array[x];

	iter(i_array, length, add<int>);

	std::cout << "\nAfter iter: ";
	for (int x = 0; x < length; x++)
		std::cout << " " << i_array[x];
	std::cout << std::endl;

	//---------CHAR ARRAY------------

	char c_array[length];

	for (int x = 0; x < length; x++)
		c_array[x] = 'a' + x;

	std::cout << "\nBefore iter: ";
	for (int x = 0; x < length; x++)
		std::cout << " " << c_array[x];

	iter(c_array, length, add<char>);

	std::cout << "\nAfter iter: ";
	for (int x = 0; x < length; x++)
		std::cout << " " << c_array[x];
	std::cout << std::endl;

	//---------DOUBLE ARRAY------------

	double d_array[length];

	for (int x = 0; x < length; x++)
		d_array[x] = 1.2 + x;

	std::cout << "\nBefore iter: ";
	for (int x = 0; x < length; x++)
		std::cout << " " << d_array[x];

	iter(d_array, length, add<double>);

	std::cout << "\nAfter iter: ";
	for (int x = 0; x < length; x++)
		std::cout << " " << d_array[x];
	std::cout << std::endl;
}
