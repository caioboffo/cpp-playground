/*
 * fucking_pchar.cpp
 *
 *  Created on: 26/02/2015 15:57:36
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 *
 */

#include <iostream>

using namespace std; 

class WithPchar {
	private: 
		char* name;
	public:
		WithPchar(char* name);
		void setChar(char* name);
		char* getChar(void);
};

WithPchar::WithPchar(char* name){
	this->name = name;
}

void WithPchar::setChar(char* name){
	this->name = name;
}

char* WithPchar::getChar(void){
	return this->name;
}



int main(int argc, char const *argv[])
{
	// http://en.wikibooks.org/wiki/GCC_Debugging/g%2B%2B/Warnings/deprecated_conversion_from_string_constant
	char* caio = (char*)"Caio Boffo Silva";

	WithPchar* wpc0 = new WithPchar(caio);
	WithPchar* wpc1 = new WithPchar((char*)"dois");

	cout << wpc0->getChar() << endl;
	cout << wpc1->getChar() << endl;

	return 0;
}