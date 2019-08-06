#include <iostream>
#include <vector>

int main()
{
   std::string text = "this is just a parragraph that's just doing things. Typing things, all the things. Currently watching survivor, and I guess there are some interesting things going on. I feel like Andy's power is getting to his head, he's playing his cards waaaaay too early. So I guess we'll just see how that plays out for him.";

    for (auto it = text.cbegin();
         it != text.cend(); ++it){
        std::cout << *it << std::endl;
        std::cout << ::toupper(*it) << std::endl;}
    return 0;
}
    
