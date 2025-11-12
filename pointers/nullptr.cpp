#include <iostream>

int count_x(char* p, char x)
{
  //check to see that the pointer value is not nullptr
  if (p == nullptr) return 0;

  int count = 0;
  
  // do not need an initializer as we are doing pointer arithmetic to get the next element
  for (; *p!=0; ++p) {
    if (*p == x) { // dereferencing the memory address stored in p
      ++count;
    }
  }
  return count;
}


int main()
{
  char x = 'a';
  char arr[] = {'a', 'a', 'b', 'c', 'z', 'a'};
  char* p = &arr[0];
  
  std::cout << count_x(p, x) << std::endl;
}
