


#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<int> my_list = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(auto i : my_list) { // somente leitura não modifica  o item da lista....
		i+=3;
	}


	for(auto&& i : my_list) { // somente leitura não modifica  o item da lista....
		i+=3;
	}

	for(auto&& i : my_list) { // tanto com & ou && itens modifica o item da lista...
		cout << i << endl;
	}
	return 0;
}