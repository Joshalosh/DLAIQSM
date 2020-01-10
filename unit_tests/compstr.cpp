#include <iostream>
#include <cstring>
#include <string>

int main() {
  char str1[6];
  char str2[6];
  for (int i = 0; i <= 6; ++i)
    std::cin >> str1[i];
  for (int j = 0; j <= 6; ++j)
    std::cin >> str2[j];

  if (!strcmp(str1, str2)) {
    std::cout << "The strings are the same" << std::endl;
  } else {
    std::cout << "The strings are different" << std::endl;
  }
  return 0;
}
