#include <iostream>

int main()
{
  int arr[11] = {};
  
  for (int i = 0 ; i <= 10; i++){
    arr[i] = i;
    std::cout << arr[i] << std::endl;}
  std::cout << "now I will print the contents of the array " << std::endl;

  for (auto i : arr)
    std::cout << arr[i] << std::endl;
  return 0;
}
