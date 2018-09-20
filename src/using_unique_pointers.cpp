#include <iostream>
#include <memory>
#include <utility>

using namespace std;

class thing
{
public:
    void foo() { cout << "this is foo" << endl; }
};

unique_ptr<thing> create_thing()
{
    unique_ptr<thing> local_ptr(new thing);
    return local_ptr;
}

struct widget
{
    int n;
    widget(int p) : n(p) {}
    void show() { cout << n << endl; }
};

void sink(std::unique_ptr<widget> uPtr) {}

void use_widget(unique_ptr<widget>& wid) {
    cout << wid->n << endl;
    wid->n++;
    wid.reset(new widget(2003));
}

void use_widet(unique_ptr<widget> wid) {
    unique_ptr<widget> aux = move(wid);
    aux->show();
}

int main()
{
    auto mypointer(create_thing());
    auto uniqPtr = std::make_unique<widget>(1988);
    use_widget(uniqPtr);

    mypointer->foo();
    cout << uniqPtr->n << endl;
    return 0;
}
