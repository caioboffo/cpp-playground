#include <iostream>
#include <vector>

class my_class_t
{
public:
    my_class_t(int i) : value(i) {}
    void show()
    {
        std::cout << value << ' ';
        if (inner_vector.size() > 0)
        {
            for (auto v : inner_vector)
            {
                v.show();
            }
        }
        std::cout << std::endl;
    }
    void add(my_class_t t) { inner_vector.push_back(t); }
private:
    int value;
    std::vector<my_class_t> inner_vector;
};

int main()
{
    my_class_t a{1}, b{2}, c{3}, d{4}, e{5};
    std::vector<my_class_t> my_vector;

    my_vector.push_back(a);
    a.add(b);
    a.add(c);
    a.add(d);
    a.add(e);

    for (auto i : my_vector) {
        i.show();
    }
    return 0;
}
