#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string str3;
    int len;

    str3 = str1; // string copy
    std::cout << "str3: " << str3 << std::endl;

    str3 = str1 + str2; // string concatenation
    std::cout << "str1 + str2: " << str3 << std::endl;

    len = str3.size(); // lenght of str3
    std::cout << "str3.size(): " << len << std::endl;

    cout << "----------------------" << endl;
    char a = 'A';
    string name = "ANA";

    if (name[0] == a)
        cout << "This is true";

    return 0;
}
