#include <iostream>
#include <iomanip>
#include <vector>
#include <string>


struct Item
{
    std::string name;
    double price;
    int quantity;
};

std::ostream& operator<<(std::ostream& out, Item const& item)
{
    out << std::left << std::setw(20) << item.name;
    out << std::right << std::setw(10) << item.price << std::setw(10) << item.quantity;

    return out;
}

void printline(std::ostream& out)
{
    for(int i=0; i < 40; i++)
        out << "-";
    out << std::endl;
}

int main()
{
    std::vector<Item> items;

    items.push_back({"tshirt", 19.00, 2});
    items.push_back({"sweater", 39.99, 1});
    items.push_back({"iphpone_case", 25.50, 3});
    items.push_back({"towel", 9.99, 5});

    printline(std::cout);

    std::cout << std::left << std::setw(20) << "NAME";
    std::cout << std::right << std::setw(10) << "PRICE" << std::setw(10) << "QUANTITY" << std::endl;

    for (Item& i : items)
    {
        std::cout << i << std::endl;
    }

    printline(std::cout);
}
