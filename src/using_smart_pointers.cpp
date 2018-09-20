
/* Using smmart pointers, we can make pointers to work in way tha we don't need to
 * explicitly call delete. Smart pointers is a wrapper class over a pointer with
 * operator like * and -> overloaded. The objects of smart pointer class look like
 * pointers, but can do many things that a normal pointer can't like automativ
 * destruction (yes, we don't have to explicitly use delete), reference counting
 * and more. */

#include <iostream>
#include <memory>
#include <string>

using namespace std;

class base_t
{
public:
    base_t() = default;
    virtual void foo() { cout << "This is foo" << endl; }
    virtual ~base_t() { cout << "deleting base_t " << endl; }
};

class derived_t : public base_t
{

};

int main() {
    // two allocaations instructions
    // shared_ptr<derived_t> dp1(new derived_t);
    // shared_ptr<base_t> bp1 = dp1;
    // shared_ptr<base_t> bp2(dp1);
    // shared_ptr<base_t> bp3(new derived_t);

    // one allocation instructions
    // shared_ptr<derived_t> derived(make_shared<derived_t>());

    shared_ptr<base_t> derived(make_shared<base_t>());
    derived->foo();

    // casting smart pointers
    shared_ptr<base_t> base_ptr(new base_t);
    shared_ptr<derived_t> derived_ptr;
    derived_ptr = static_pointer_cast<derived_t>(base_ptr);

}
