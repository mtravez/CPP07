#include "Array.hpp"

int main()
{
	Array<char> array(6);
	for (unsigned int i = 0; i < array.size(); i++)
	{
		array[i] = i + 'a';
	}

	Array<char> hi = array;
	for (unsigned int i = 0; i < array.size(); i++)
	{
		std::cout << array[i];
	}
	std::cout << std::endl;

	for (unsigned int i = 1; i <= array.size(); i++)
	{
		std::cout << hi[hi.size() - i];
	}
	std::cout << std::endl;
}