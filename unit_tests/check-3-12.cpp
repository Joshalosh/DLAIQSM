#include <iostream>
#include <vector>


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

    for (auto i : v1)
        std::cout << i << std::endl;
    std::cout << "The size of v1 is " << v1.size() << std::endl;
    for (auto i : v2)
        std::cout << i << std::endl;
    std::cout << "The size of v2 is " << v2.size() << std::endl;
    for (auto i : v3)
        std::cout << i << std::endl;
    std::cout << "The size of v3 is " << v3.size() << std::endl;
    for (auto i : v4)
        std::cout << i << std::endl;
    std::cout << "The size of v4 is " << v4.size() << std::endl;
    for (auto i : v5)
        std::cout << i << std::endl;
    std::cout << "The size of v5 is " << v5.size() << std::endl;
    for (auto i : v6)
        std::cout << i << std::endl;
    std::cout << "The size of v6 is " << v6.size() << std::endl;
    for (auto i : v7)
        std::cout << i << std::endl;
    std::cout << "The size of v7 is " << v7.size() << std::endl;
       
    return 0;
}
