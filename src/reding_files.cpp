
#include <fstream>
#include <sstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	std::ifstream file;
	std::string line;
	std::string item;
	// abre o arquivo 
	file.open("file.txt");
	// se o arquivo foi aberto 
	if (file.is_open()) {
		std::cout << "File opened!" << '\n';
		// le as linhas do arquivo
		while(std::getline(file, line)) {
			
			std::stringstream  linestream(line);
			// quebra as palavras delimitadas por ' '
			// e as imprime na tela
			while (std::getline(linestream, item, ' ')) {
				std::cout << item << '\n';
			}
		}

	}else {
		fprintf(stderr, "Something bad happend!");
	}
	file.close();
	exit(EXIT_SUCCESS);
}