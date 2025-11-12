#include <iostream>

int main()
{
  char v[] = {'a', 'b', 'c', 'd', 'e', 'f'};

  // range for -> for each element in v[i], assign i to v[i]
  for (char i : v) {
    std::cout << i << std::endl;
  }

  std::cout << "\n";
  
  // range for using reference
  for (auto& x : v) {
    ++x;
    std::cout << x << std::endl;
  }
}
