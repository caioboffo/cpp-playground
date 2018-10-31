#include <glibmm.h>
#include <iostream>

int main(int argc, char *argv[])
{
    gint a = 10;
    gint32 b = 2;
    gint32 c = a-b;

    std::cout << c  << std::endl;
    return 0;
}
