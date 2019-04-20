#include <iostream>


int main()
{
    std::string::size_type c = 0;
    std::string str("Here is a sentence that is unchanged");

    std::cout << str << std::endl;
    while (c < str.size()) {
        str[c] = 'x';
        c++;
    }
    std::cout << str << std::endl;
    return 0;
}
