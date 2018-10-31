#include <cstring>
#include <iostream>
#include <memory>
#include <vector>

struct myStruct
{
	int id;
    std::string nome;
    myStruct(int _id, std::string _nome) : id(_id), nome(_nome) {}
};

int main()
{
    using element_vector = std::vector<std::unique_ptr<myStruct>>;
    std::unique_ptr<element_vector> elementos(new element_vector);

	auto e1 = std::make_unique<myStruct>(1, "eu sou o elemento 1");
    auto e2 = std::make_unique<myStruct>(2, "eu sou o elemento 2");
    auto e3 = std::make_unique<myStruct>(3, "eu sou o elemento 3");
    auto e4 = std::make_unique<myStruct>(4, "eu sou o elemento 4");

	elementos->push_back(std::move(e1));
	elementos->push_back(std::move(e2));
	elementos->push_back(std::move(e3));
	elementos->push_back(std::move(e4));

	for (auto&& e : *elementos)
	{
		std::cout << "id: " << e->id << " nome: " << e->nome << std::endl;
	}

	return 0;
}
