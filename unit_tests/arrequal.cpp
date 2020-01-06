#include <iostream>
#include <vector>

int main()
{
  int arr1[5];
  int arr2[5];

  for (int i = 0; i != 5; ++i)
    std::cin >> arr1[i];
  for (int i = 0; i != 5; ++i)
    std::cin >> arr2[i];

  int i = 0;
  for (; i != 5; ++i)
    if (arr1[i] != arr2[i]) {
      std::cout << "The arrays are different" << std::endl;
      break;
    }
    if (i == 5)
      std::cout << "The arrays are the same" << std::endl;


    std::vector<int> v1;
    std::vector<int> v2;
    int t;
    for (int i = 0; i != 5; ++i) {
      std::cin >> t;
      v1.push_back(t);
    }
    for (int i = 0; i != 5; ++i) {
      std::cin >> t;
      v2.push_back(t);
  }

    if (v1 == v2)
      std::cout << "The vectors are equal" << std::endl;
    else
      std::cout << "The vectors are not equal" << std::endl;

  return 0;
}
