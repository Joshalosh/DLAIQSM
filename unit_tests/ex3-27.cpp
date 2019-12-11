#include <iostream>

int main()
{
  unsigned buf_size = 1024;
  int ia[buf_size];
  int ja[4 * 7 - 14];

  std::cout << "The contents of ia is: " << std::endl;
  for (unsigned i : ia)
    std::cout << ia[i] << std::endl;

  std::cout << "The contents of ja is: " << std::endl;
  for (unsigned i : ja)
    std::cout << ja[i] << std::endl;

  return 0;
}
