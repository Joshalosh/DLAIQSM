#include <iostream>
#include <vector>

/*void PrintVectNum(std::vector<int>::iterator v)
{
    for (auto it = v.cbegin();
         it != v.cend() && !it->empty(); ++it)
        std::cout << it << std::endl;
        std::cout << "The size of the vector is " << it.size() << std::endl;
}*/

void PrintVectString(std::vector<std::string> v)
{
    for (auto it = v.cbegin();
         it != v.cend() && !it->empty(); ++it)
        std::cout << *it << std::endl;
        std::cout << "The size of the vector is " << v.size() << std::endl;
}

int main()
{
    std::vector<std::vector<int>>  ivec;
    //std::vector<std::string> svec = ivec;
    std::vector<std::string> svec(10, "null");

   // std::vector<int> v1;
   // for (auto it = v1.cbegin();
   //      it != v1.cend() && !it->empty(); ++it)
   //     std::cout << *it << std::endl;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    for (auto it = v6.cbegin();
         it != v6.cend() && !it->empty(); ++it)
        std::cout << *it << std::endl;
    std::vector<std::string> v7{10, "hi"};
    
    
   // PrintVectNum(v1);
   // PrintVectNum(v2);
   // PrintVectNum(v3);
   // PrintVectNum(v4);
   // PrintVectNum(v5);
    PrintVectString(v6);
    PrintVectString(v7);
    
    return 0;
}
