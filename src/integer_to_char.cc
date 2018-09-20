#include <cstdio>

using namespace std;


int main(int argc, char const *argv[])
{
	const char *str1 = "12";
	const char *str2 = "30";

	char resultado[256];

	sprintf(resultado, "%s:%s", str1, str2);

	printf("%s\n", resultado );


	return 0;
}