#include <iostream>

int main()
{
  int arr[10];
  int *beg = arr;
  int *end = &arr[10];

  while (beg != end){
   *beg = 0;
   ++beg;}

  for (int i = 0; i < 10; ++i)
    std::cout << arr[i] << std::endl;

  return 0;
}
