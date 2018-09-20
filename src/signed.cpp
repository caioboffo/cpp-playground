#include <iostream>

using namespace std;

int main ( int argc, char *argv[] ) 
{
    int my_int = 1239012;
    unsigned int my_unsigned_int = 1231298;

    cout << "this is my int: " << my_int << endl;
    cout << "this is my unsigned int: " << my_unsigned_int << endl;
    cout << "this happens when you change the sign of a unsigned int" 
         << endl;
    cout << "this is my unsigned int turned negative: " 
         << -my_unsigned_int << endl;
    cout << "this is my int turned negative: " << -my_int <<  endl;
    return 0;
}
