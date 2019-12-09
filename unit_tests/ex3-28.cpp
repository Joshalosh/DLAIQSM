#include <iostream>

int main()
{
	std::string sa[10];
	int ia[10];
	
	for (unsigned i = 0; i <= sizeof(sa); i++)
		std::cout << "The contents of sa is: " << sa[i] << std::endl;

	for (unsigned i = 0; i <= sizeof(ia); i++)
		std::cout << "the contents of ia is: " << ia[i] << std::endl;

	return 0;
}
