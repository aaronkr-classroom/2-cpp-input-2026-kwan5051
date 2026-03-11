#include <iostream>
#include <string>

int main(void) 
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
		{//货肺款 s 积己
			const std::string s = "another string";
			std::cout << s << std::endl;
		}//s 家戈
	}//观s家戈
	return 0;
}