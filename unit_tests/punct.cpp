#include <iostream>

int main()
{
    std::string i = "Here is a sentence. It's got some punctuation, and st,.,.uff.";
    std::string str;

    for (auto c : i)
        if (!ispunct(c))
            str += c;
    std::cout << str << std::endl;
    return 0;
}
        
