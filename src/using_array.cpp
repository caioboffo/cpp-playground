#include <iostream>
#include <array>

int main(int argc, char *argv[])
{
    std::array<int, 3> arr = { 9, 8, 7 };
    std::cout << "Array size = " << arr.size() << std::endl;
    std::cout << "Element 2 =" << arr[1] << std::endl;
    return 0;
}
