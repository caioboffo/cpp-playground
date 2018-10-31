#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

class SortedListOfNames
{
public:
    void add(std::string new_name)
    {
        names.push_back(new_name);
        std::sort(names.begin(), names.end());
    }
    void list()
    {
        for (std::string& name : names)
        {
            std::cout << name << std::endl;
        }
    }

private:
    std::vector<std::string> names;
};

int main()
{
    SortedListOfNames my_list;

    my_list.add("Elohá");
    my_list.add("Caio");
    my_list.add("Ned");
    my_list.list();

    return 0;
}
