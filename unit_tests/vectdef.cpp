#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1(10,42);
    std::vector<int> v2{42,42,42,42,42,42,42,42,42,42};
    std::vector<int> v3 = v2;
   
    std::cout << "These are the contents of the first vector" << std::endl; 
    for (auto i : v1)
        std::cout << i << std::endl;
    std::cout << "These are the contents of the second vector" << std::endl;
    for (auto i : v2)
        std::cout << i << std::endl;
    std::cout << "These are the contents of the third vector" << std::endl;
    for (auto i : v3)
        std::cout << i << std::endl;
    
    return 0;
}

