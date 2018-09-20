/*
 * using_pointers.cpp
 *
 *  Created on: 07/04/2015 14:28:39
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 */


#include <iostream>
#include <memory>

struct foo_t
{
    foo_t() { std::cout << "Foo::Foo\n"; }
    ~foo_t() { std::cout << "Foo::~Foo\n"; }
    void bar() { std::cout << "Foo::bar\n"; }
};

void f(const foo_t &foo)
{
    std::cout << "f(const Foo&)\n";
}

int main()
{
    std::unique_ptr<foo_t> p1(new foo_t);
    if (p1) p1->bar();
    {
        std::unique_ptr<foo_t> p2(std::move(p1));
        f(*p2);
        p1 = std::move(p2);
        std::cout << "destroyin p2 ...\n";
    }
    if (p1) p1->bar();
}
