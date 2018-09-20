#include <string>
#include <iostream>
#include <utility>

struct A {
	std::string s;
	//A() : s("teste") {} // Initialization List Constructor ...
	A() {
		bazinga();
	}
	// A(const A& o) : s(o.s) { std::cout << "move failed!\n";}
	// A(A&& o) : s(std::move(o.s)) {}
	// A& operator=(const A& other) {
	// 	s = other.s;
	// 	std::cout << "copy assigned\n";
	// 	return *this;
	// }
	// A& operator=(A&& other) {
	// 	s = std::move(other.s);
	// 	std::cout << "move assigned\n";
	// 	return *this;
	// }
	void bazinga() {
		std::cout << "bazinga!!!\n"; 
	}
};


struct class_like {
	private:
		std::string st;
	public:
		class_like() : st("there is something in the way.") {}
		std::string getSt() { return this->st; }
};

int main(int argc, char const *argv[]) {
	
	A my_a;
	class_like cl;
	std::cout << cl.getSt() << std::endl;
	std::cout << my_a.s << std::endl;

	return 0;
}