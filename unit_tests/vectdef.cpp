#include <iostream>
#include <vector>


void PrintVect(std::vector<int> v)
{
    std::cout << "These are the vector contents" << std::endl;
    for (auto i : v)
        std::cout << i << std::endl;
}

int main()
{
    std::vector<int> v1(10,42);
    std::vector<int> v2{42,42,42,42,42,42,42,42,42,42};
    std::vector<int> v3 = v2;
  
    PrintVect(v1);
    PrintVect(v2);
    PrintVect(v3);

    return 0;
}

