#include <stdio.h>
#include <sqlite3.h> 

int main(int argc, char const *argv[])
{
	sqlite3* db;
	int rc;

	rc = sqlite3_open("test.db", &db);

	printf("ResultCode:%i\n", rc);
	return 0;
}