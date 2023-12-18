//#include "iter.hpp"
//#include <iostream>
//
////void	add(int &i)
////{
////	i += 2;
////}
//
//template <typename T>
//void	add(T &i)
//{
//	i += 2;
//}
//
//int main( void ) {
//	int length = 6;
//
//	//---------INT ARRAY------------
//
//	int i_array[length];
//
//	for (int x = 0; x < length; x++)
//		i_array[x] = 9;
//
//	iter(i_array, length, add<int>);
//
//	for (int x = 0; x < length; x++)
//		std::cout << " " << i_array[x];
//	std::cout << std::endl;
//
//	//---------CHAR ARRAY------------
//
//	char c_array[length];
//
//	for (int x = 0; x < length; x++)
//		c_array[x] = 'a';
//
//	iter(c_array, length, add<char>);
//
//	for (int x = 0; x < length; x++)
//		std::cout << " " << c_array[x];
//	std::cout << std::endl;
//
//	//---------DOUBLE ARRAY------------
//
//	double d_array[length];
//
//	for (int x = 0; x < length; x++)
//		d_array[x] = 1.2;
//
//	iter(d_array, length, add<double>);
//
//	for (int x = 0; x < length; x++)
//		std::cout << " " << d_array[x];
//	std::cout << std::endl;
//}


#include "iter.hpp"
#include <iostream>

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter( tab, 5, print<int> );
	iter( tab2, 5, print<Awesome> );

	return 0;
}