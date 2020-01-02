#include <iostream>

int main()
{
  int count1 = 0;
  int count2 = 0;
  int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
//  int arr2[10] = {0,1,2,3,4,5,6,7,8,9};
  int arr3[10] = {0,1,2,3,0,4,6,7,8,9};

  for (int i = 0; i < 10; i++){
    count1 += arr1[i];
    count2 += arr3[i];
  }
  if (count1 != count2) {
    std::cout << "The arrays are different" << std::endl;
  } else {
    std::cout << "The arrays are the same" << std::endl;
  }
  return 0;
}
