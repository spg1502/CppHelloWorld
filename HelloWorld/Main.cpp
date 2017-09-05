#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello World!" << std::endl;
	std::string response;
	response = std::cin.get();
	std::cin.get();

	std::cout << response + ", is what you said" << std::endl;
	std::cin.get();
}