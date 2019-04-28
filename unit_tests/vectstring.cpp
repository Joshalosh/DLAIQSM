#include <iostream>
#include <vector>

int main()
{
    std::string word;
    std::vector<std::string> text;
    while (std::cin >> word) {
        text.push_back(word);
    }
}
