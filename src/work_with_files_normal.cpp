#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ifstream pFile;
    string line;

    pFile.open("file.txt");

    while (getline(pFile, line))
    {
        cout << line << endl;
    }


    return 0;
}