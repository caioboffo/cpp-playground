#include <iostream>
#include <thread>


void foo()
{
    for( long i = 0L; i < 10000000000L; i++ );
    std::cout << "did something" << std::endl;
}
void bar(int x)
{
    for (long i = 0L; i < 10000000000L; i++);
    std::cout << "x" << std::endl;
}

int main()
{
    std::thread first (foo);
    std::thread second (bar,0);

    std::cout << "main, foo and bar now execute concurrently...\n";

    first.join();
    second.join();

    std::cout << "foo and bar completed\n";
    return 0;
}
