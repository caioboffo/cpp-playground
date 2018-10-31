#include <iostream>
#include <memory>
#include <utility>

class thing
{
public:
    void foo() { std::cout << "this is foo" << std::endl; }
};

std::unique_ptr<thing> create_thing()
{
    std::unique_ptr<thing> local_ptr(new thing);
    return local_ptr;
}

struct widget
{
    int n;
    widget(int p) : n(p) {}
    void show() { std::cout << n << std::endl; }
};

void use_widget(std::unique_ptr<widget>& wid) {
    std::cout << wid->n << std::endl;
    wid->n++;
    wid.reset(new widget(2003));
}

void show_widget(std::unique_ptr<widget> wid) {
    std::unique_ptr<widget> aux = move(wid);
    aux->show();
}

int main()
{
    auto mypointer(create_thing());
    auto uniqPtr = std::make_unique<widget>(1988);
    use_widget(uniqPtr);

    mypointer->foo();
    std::cout << uniqPtr->n << std::endl;
    show_widget(std::move(uniqPtr));
    return 0;
}
