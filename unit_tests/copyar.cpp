#include <iostream>

int main()
{
  int arr1[11];
  int arr2[10];

  for (int i = 0; i <= 10; i++)
    arr1[i] = i;
      
  for (auto i : arr1)
    arr2[i] = i;

  std::cout << "The contents of arr1 are " << std::endl;
  for (auto i : arr1)
    std::cout << arr1[i] << std::endl;

  std::cout << "The contents off arr2 are " << std::endl;
  for (auto i : arr2)
    std::cout << arr2[i] << std::endl;
  return 0;
}

