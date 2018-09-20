/*
 * using_unsorted_map.cpp
 *
 *  Created on: 24/03/2015 19:51:15
 *      Autor: Caio Boffo Silva
 *      E-Mail: caioboffo@gmail.com
 *
 */
#include <iostream>
#include <string>

int main ()
{
	std::unordered_map<std::string, double> mymap = {
		{"mom", 5.4},
		{"dad", 6.1},
		{"bro", 5.9}
	};

	std::string input;
	std::cout << "who? ";
	input = "bro";

	std::unordered_map<std::string, double>::const_iterator got = mymap.find (input);

	if ( got == mymap.end() )
		std::cout << "not found";
	else
		std::cout << got->first << " is " << got->second;

	std::cout << std::endl;

	std::unordered_map<std::string, double>
	myrecipe,
	mypantry = {{"milk", 2.0}, {"flour", 1.5}};

	std::pair<std::string, double> myshopping ("baking powder", 0.3);

	myrecipe.insert (myshopping);                        // copy insertion
	myrecipe.insert (std::make_pair<std::string, double>("eggs", 6.0)); // move insertion
	myrecipe.insert (mypantry.begin(), mypantry.end());  // range insertion
	myrecipe.insert ( {{"sugar", 0.8}, {"salt", 0.1}} ); // initializer list insertion

	std::cout << "myrecipe contains:" << std::endl;
	for (auto& x : myrecipe)
		std::cout << x.first << ": " << x.second << std::endl;

	std::cout << std::endl;

	return 0;
}
