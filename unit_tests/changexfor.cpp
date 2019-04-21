#include <iostream>

int main()
{
    std::string::size_type c = 0;
    std::string str("Here is a sentence that is unchanged");

    std::cout << str << std::endl;
    for (c = 0; c < str.size(); c++) {
        str[c] = 'x';
    }
    std::cout << str << std::endl;
    return 0;
}
