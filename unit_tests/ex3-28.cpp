#include <iostream>

int main()
{
	std::string sa[10]; 
	int ia[10];
	
	for (auto i : sa) 
		std::cout << "The contents of sa is: " << sa[i] << std::endl;

	for (auto i : ia) 
		std::cout << "the contents of ia is: " << ia[i] << std::endl;

	return 0;
}
