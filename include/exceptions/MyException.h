#include <exception>

#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

class MyException : public std::exception {
	public: 
		virtual const char* what() const throw() { return "Something bad happend."; }
};

#endif