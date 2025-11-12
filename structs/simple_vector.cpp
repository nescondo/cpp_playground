#include <iostream>

struct SimpleVector {
  int sz;
  double* elem;
};

void vector_init(SimpleVector& v, int s)
{
  v.sz = s;
  v.elem = new double[s]; //allocate an array of size s in dynamic memory (heap)
}

double read_and_sum(SimpleVector& v)
{
  //read elements into vector
  for (int i=0; i!=v.sz; ++i) {
    std::cin >> v.elem[i];
  }

  double sum;
  //sum elements in vector's array of doubles
  for (int i=0; i!=v.sz; ++i) {
    sum += v.elem[i];
  }

  return sum;
}

int main()
{
  SimpleVector v;
  vector_init(v, 6);

  double sum = read_and_sum(v);

  //print each element from v's array of doubles
  for (int i=0; i<v.sz; ++i) {
    std::cout << v.elem[i] << std::endl;
  }

  std::cout << "\n";

  std::cout << "v's sum: " << sum << std::endl;
  
}
