#include <iostream>

using namespace std;

auto addNumber (int i) -> int
{
    cout << "Entering function " << __func__ << endl;
    return i + 2;
}

auto main () -> int
{
    cout << addNumber(3) << endl;
    return 0;
}
