/* Passando parametros tipo string por referencia ... */

#include <string>
#include <iostream>


using namespace std;

void parameter_by_value(int n)
{
	n++;
}

void parameter_by_pointer(int* p)
{
	*p = 5;
	p = NULL;
}

void parammeter_by_reference(int& n)
{
	n++;
}

void parameter_by_cons_reference(const int& list)
{
	// the code here cannot modigy 'list' or the compiller will complain
	cout << list << endl;
}

void parameter_string_by_reference(int A[])
{
	A[0] = 5;
}
int main()
{
    // In C++, a parameter can be passed by:
   
    // 1. value
    // 2. reference, or
    // 3. const reference

    // Each parameter's mode is determined by the way it is specified 
    // in the function's header (the mode is the same for all calls 
    // to the function). For Example.

    // void do_something_fancy( int a, int &b, const int& c );

    // Parameter a is a value parameter, b is a reference parameter, and c
	// is a const-reference parameter.

	// Value Parameters

	// When a parameter is passed by value, a  copy of the parameter is made. 	
	// Therefore, changes made to the formal parameter by the called function
	// have no effect on the corresponding actual parameter. For Example:
	
	// void f(int n)
	// {
	// 	n++;
	// }

	int x = 2;
	parameter_by_value(x);
	cout << x << endl; // the output is 2

	// Note thar if a pointer is passed by value, then although the pointer itself
	// is no affected by changes made to the corresponding formal parameter, the 
	// object poointed by the pointer can be changed. For Example:

	int y = 2;
	int* q = &y;
	parameter_by_pointer(q);
	// here x == 5, but q != NULL because pointer q was passed by value.
	// them its value doesn't change 
	cout << y << endl; // the output is 5
	cout << q << endl; // the output is not null... copy

	// Reference Parameters

	// When a parameter is passed by reference, conceptually, the actual
	// parameter itself is passed (and just given a new name -- the name 
	// of the corresponding formal parameter). Therefore, any changes made
	// to the formal parameter do affect the actual parameter. For Example:
	int z = 2;
	parammeter_by_reference(z);
	cout << z << endl; // the output is 3


	// Const-Reference Parameters
	// Another reason to use reference parametersis when you don't want the function 
	// to modify an actual paramate, but the actual parameter is very large,
	// and you want to avoid  the overhead of creating a copy. Of course, this only works if
	// the function does not modify formal parameters. To be sure tha the actual
	// parameter is not "accidentally" modified, you should use a  const-reference parameter
	// Declaring the parameter to be const tells the compiler that it should not be changed
	// if the function does change the parameter, you will get a compile-time warning (possibly an error
	// on some systems). For Example:
	int a = 2;
	parameter_by_cons_reference(a); // the output is 2

	// C++ arrays is that they are always passed by reference (even though you don't declare them 
	// to be reference parameters). For Example:

	int B[10];
	B[0] = 2;
	parameter_string_by_reference(B);
	cout << B[0] << endl; // the output is 5 

	return 0;
}
