#include <iostream>

int main() {
  std::string str1;
  std::string str2;
  std::cin >> str1;
  std::cin >> str2;

  if (str1 == str2) {
    std::cout << "The strings are the same" << std::endl;
  } else {
    std::cout << "The strings are different" << std::endl;
  }
  return 0;
}
