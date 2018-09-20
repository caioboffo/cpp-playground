#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char const *argv[])
{
    // Compare object to create a min heap with make_heap
    struct cmp {
        bool operator()(const int& a, const int& b){
            return a>b;
        }      
    };
    /* code */
    int myints[] =  {10, 20, 30, 5, 15};
    std::vector<int> v(myints, myints + 5);

    std::make_heap(v.begin(), v.end(), cmp());
    std::cout << "initiall min heap: "
              << v.front() << std::endl;

    std::pop_heap(v.begin(), v.end(), cmp());
    v.pop_back();

    std::cout << "min heap after pop: " << v.front() << std::endl;

    return 0;
}