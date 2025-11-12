#include <iostream>

class SimpleVector {
 public:
  SimpleVector(int s): elem{new double[s]}, sz{s} { } //constructor utilizing member initialization lists
  double& operator[](int i) { return elem[i]; } //operator overloading of '[]' to represent array indexing
  int size() { return sz; } //function to return size

 private:
  double* elem; //use pointer because we want the values of SimpleVector to change potentially (references cannot change once initialized)
  int sz;
};


int main()
{
  SimpleVector v(6);

  for (int i=0; i<v.size(); ++i) {
    std::cout << "Enter value at index " << i << " " << std::endl;
    std::cin >> v[i];
  }

  std::cout << "\n";

  for (int i=0; i<v.size(); ++i) {
    std::cout << v[i] << std::endl;
  }
}
