#include <iostream>
#include <vector>

void PrintVectNum(std::vector<int> v)
{
    for (auto i : v)
        std::cout << i << std::endl;
        std::cout << "The size of the vector is " << v.size() << std::endl;
}

void PrintVectString(std::vector<std::string> v)
{
    for (auto i : v)
        std::cout << i << std::endl;
        std::cout << "The size of the vector is " << v.size() << std::endl;
}

int main()
{
    std::vector<std::vector<int>>  ivec;
    //std::vector<std::string> svec = ivec;
    std::vector<std::string> svec(10, "null");

    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};
    
    
    PrintVectNum(v1);
    PrintVectNum(v2);
    PrintVectNum(v3);
    PrintVectNum(v4);
    PrintVectNum(v5);
    PrintVectString(v6);
    PrintVectString(v7);
    
    return 0;
}
