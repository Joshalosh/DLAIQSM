#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>>  ivec;
    //std::vector<std::string> svec = ivec;
    std::vector<std::string> svev(10, "null");

    std::vector<int> v1;
    std::vector<int> v2(10);
    std::cout << v2 << std::endl;
    std::vector<int> v3(10, 42);
    std::cout << v3 << std::endl;
    std::vector<int> v4{10};
    std::cout << v4 << std::endl;
    std::vector<int> v5{10, 42};
    std::cout << v5 << std::endl;
    std::vector<std::string> v6{10};
    std::cout << v6 << std::endl;
    std::vector<std::string> v7{10, "hi"};
    std::cout << v7 << std::endl;
    return 0;
}
