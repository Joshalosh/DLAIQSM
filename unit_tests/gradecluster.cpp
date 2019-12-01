#include <iostream>
#include <vector>
#include <iterator>

int main ()
{
  std::vector<int> scores(11, 0);
  for (int grade; std::cin >> grade;) // read the grades
    if (grade <= 100) // handle only valid grades
      ++*(scores.begin() + grade/10); //increment the counter for the current cluster
  for (auto s : scores)
    std::cout << s << " " << std::endl;

  return 0;
}
