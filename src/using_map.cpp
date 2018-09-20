#include <iostream>
#include <map>
#include <cstring>


using namespace std;

int main(int argc, char const *argv[])
{

	map<string, string> vertices;

	// adicionando os vertices ao map...
	vertices.insert( pair<string, string> ("ab", "ab"));
	vertices.insert( pair<string, string> ("bc", "bc"));
	vertices.insert( pair<string, string> ("cd", "cd"));
	vertices.insert( pair<string, string> ("de", "de"));
	vertices.insert( pair<string, string> ("ef", "ef"));

	for (map<string, string>::iterator it = vertices.begin(); it != vertices.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';

	return 0;
}