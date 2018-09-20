#include <iostream>
#include <climits>

int main(int argc, char *argv[])
{
    int uninitialized;

    std::cout << "This is the value of my variable: "
              << uninitialized << std::endl;

    return 0;
}
