#include <memory>

// old way of doing classes
class A {
public:
    int *i;

    A() : i(new int(0)) { }

    ~A() {
        if (i) { delete i; }
    }
    // we need to explicitly disable value-copyin, as it's not safe!
    A(const A&) = delete;
    A& operator=(const A&) = delete;
};

class B {
public:
    std::unique_ptr<int> i;

    B() : i(new int(0)) {}

};
