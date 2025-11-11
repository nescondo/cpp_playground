#include <iostream>

int main()
{
  char v[6]; //array of 6 chars
  char* p; // pointer to character
  char x = *p; // *p is the object that p points to

  int arrSize = sizeof(v) / sizeof(char); //gets size of array -> sizeof(v) = 6 bytes, size of char = 1 byte, 6/1 = 6

  for (int i = 0; i<arrSize; ++i) {
    v[i] = 97 + i; //decimal value on ascii starting a lowercase a
  }

  //loop thru v
  for (int i = 0; i<arrSize; ++i) {
    std::cout << "value at " << i << " is " << v[i] << std::endl;
    std::cout << "\n";
  }

  //differences between p and *p
  for (int i = 0; i<arrSize; ++i) {
    p = &v[i]; // set p to point to v[i] through every iteration
    x = *p; // set x to point to the value (object) that p points to
    std::cout << "p at i = " << i << " is " << p << std::endl;
    std::cout << "*p at i = " << i << " is " << *p << std::endl;
    std::cout << "\n";
  }
}
