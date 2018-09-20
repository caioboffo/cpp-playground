/*
 * using_vector.cpp
 *
 *  Created on: 25/02/2015 14:35:23
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 *
 */
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

struct myStruct
{
	int id;
	string nome;
};

int main(int argc, char const *argv[])
{
	vector<myStruct> elementos;


	myStruct e1, e2, e3, e4;
	
	e1.id = 1;
	e1.nome = "eu sou o elemento 1";

	e2.id = 2;
	e2.nome = "eu sou o elemento 2";

	e3.id = 3;
	e3.nome = "eu sou o elemento 3";

	e4.id = 4;
	e4.nome = "eu sou o elemento 4";

	elementos.push_back(e1);
	elementos.push_back(e2);
	elementos.push_back(e3);
	elementos.push_back(e4);

	for (int i = 0; i < elementos.size(); i++)
	{
		cout << "id: " << elementos[i].id << " nome: " << elementos[i].nome << endl;
	}



	return 0;
}