#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    for (int i; std::cin >> i; vec.push_back(i));

    if (vec.empty())
    {
        std::cout << "Input at least one number." << std::endl;
        return -1;
    }
   
    if (vec.size() == 1)
    {
        std::cout << "There is only one element in the vector " << vec[0] << " there isn't any other elements to sum together." << std::endl;
        return -1;
    }
   
    for (unsigned long i = 0; i < vec.size() - 1; ++i)
        std::cout << vec[i] + vec[i + 1] << " " << std::endl;
    
    return 0;
} 
