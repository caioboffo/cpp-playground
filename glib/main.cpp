#include <glibmm.h>
#include <iomanip>
#include <iostream>
#include <locale>

namespace
{
    void show_examples()
    {
        using Glib::ustring;

        const double a = 3456.78;
        const double b = 7890.12;
        const int i = int (a / (a + b) * 40.0);

        std::cout << ustring::compose("%1 is lower than %2.", a, b) << std::endl
                  << ustring::compose("%2 is greater than %1.", a, b) << std::endl
                  << ustring::compose("a : b = [%1|%2]",
                                      ustring::format(std::setfill(L'a'), std::setw(i), ""),
                                      ustring::format(std::setfill(L'b'), std::setw(40 - i), ""))
                  << std::endl;
    }
}

int main(int argc, char *argv[])
{
    std::locale::global(std::locale(""));
    std::cout.imbue(std::locale());
    Glib::init();

    show_examples();
    return 0;
}
