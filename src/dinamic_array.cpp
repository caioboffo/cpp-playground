/*
 * dinamic_array.cpp
 *
 *  Created on: 26/03/2015 00:02:21
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 *      Descrição: Como criar um array de tamanho n a partir de uma entrada
 *                 do usuário.
 *
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	int num = atoi(argv[1]);
	int arranjo[num];


	for (int i = 0; i < num; ++i)
	{
		arranjo[i] = i;
	}

	for (int i = 0; i < num; ++i)
	{
		cout << arranjo[i] << " ";
	}
	
	cout << endl;


	return 0;
}