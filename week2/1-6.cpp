#include <iostream>
#include <string>

int main(void) 
{
	std::cout << "what is your name?";
	std::string name;
	std::cin >> name;
	std::cout << "hello, " << name << std::endl << "and what is yours?";
	std::cin >> name;
	std::cout << "hello, " << name << "; nice to meet yot tool" << std::endl;
	return 0;
}