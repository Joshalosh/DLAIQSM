#include <iostream>
#include <vector>


void sum_adjacent(const std::vector<int> &v) {
    if (v.size() < 2)
        return;
    for (decltype(v.size()) i = 0; i < v.size() - 1; ++i)
        std::cout << v[i] + v[i + 1] << '\t';
    std::cout << std::endl;
}

void sum_symmetric(const std::vector<int> &v) {
    // Make the element in the middle add to itself incase of odd sized vector
    auto mid = (v.size() + 1) / 2;
    for (decltype(mid) i = 0; i != mid; ++i)
        std::cout << v[i] + v[v.size() - 1 - i] << '\t';
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec;
    int i;
    while (std::cin >> i)
        vec.push_back(i);

    return 0;
}
