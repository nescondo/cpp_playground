#include <iostream>

int main()
{
  int x {2};
  double y {2.23};

  std::cout << "{} assignment works to not implicitly convert types (prevents loss of data)\n"
	    << "x=" << x << " y=" << y << std::endl;
}
