#include <iostream>
#include <vector>
#include <iterator>

int main()
{
  int num;
  std::vector<int> vec;
  std::vector<int>::iterator it;
  while (std::cin >> num) {
    vec.push_back(num);
  }
  if (vec.empty())
  {
    std::cout << "Input at least one number." << std::endl;
    return -1;
  }

  if (vec.size() == 1)
  {
    std::cout << "There is only one element in the vector " << vec[0] << " there isn't any other elements to sum together." << std::endl;
    return -1;
  }

  for (it = vec.begin(); it + 1 != vec.end(); ++it)
    std::cout << *it + *(it + 1) << " " << std::endl;

  return 0;
}
