/*
 * printing_a_class.cpp
 *
 *  Created on: 27/02/2015 15:12:17
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 *
 */
#include <cstdio>

class Foo {
private:
	int id;
	char *name;
public:
	Foo(int id, char* name);
	int getId();
	void setId(int id);
	char* getName();
	void setName(char* name);
	char* toString(void);
};

Foo::Foo(int id, char* name) {
	this->id = id;
	this->name = name;
}

int Foo::getId() {
	return this->id;
}
void Foo::setId(int id) {
	this->id = id;
}

 char* Foo::getName() {
	return this->name;
}

void Foo::setName(  char* name) {
	this->name = name;
}

 char* Foo::toString() {
 	char *output;
	//sprintf(output, "id: %d, name: %s", this->getId(), this->getName());
	return output;
}

int main(int argc, char  *argv[])
{
	Foo* foo = new Foo(1, (char*)"Caio");

	char output[256];

	sprintf(output, "id: %d, name: %s", foo->getId(), foo->getName());
	puts(output);

	return 0;
}