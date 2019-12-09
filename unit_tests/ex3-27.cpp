#include <iostream>

int main()
{
  unsigned buf_size = 1024;
  int ia[buf_size];
  int ja[4 * 7 - 14];

  std::cout << "The contents of ia is: " << std::endl;
  for (unsigned i = 0; i <= buf_size; i++)
    std::cout << ia[i] << std::endl;

  std::cout << "The contents of ja is: " << std::endl;
  for (unsigned i = 0; i <= sizeof(ja); i++)
    std::cout << ja[i] << std::endl;

  return 0;
}
