#include <iostream>

using namespace std;

[[deprecated("Replaces by bar, which has an improved interface")]]
void foo(int i)
{
    cout << "value is " << i << endl;
}

int main(int argc, char *argv[])
{
    foo(3);
    return 0;
}
