#include <iostream>
#include <vector>

int main()
{
  std::vector<int> arr1;
  std::vector<int> arr2;

  for (int i = 0; i <=10; i++)
    arr1.push_back(i);
      
  for (auto i : arr1)
    arr2.push_back(i);

  std::cout << "The contents of arr1 are " << std::endl;
  for (auto i : arr1)
    std::cout << arr1[i] << std::endl;

  std::cout << "The contents off arr2 are " << std::endl;
  for (auto i : arr2)
    std::cout << arr2[i] << std::endl;
  return 0;
}

