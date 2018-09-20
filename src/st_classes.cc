/*
 * st_classes.cc
 *
 *  Created on: 09/03/2015 13:43:49
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 */
#include <iostream>

class MyClass 
{
	public:
		static const int MAIDEN = 10;
};

using namespace std;

int main(int argc, char const *argv[])
{
	cout << MyClass::MAIDEN << endl;

	return 0;
}