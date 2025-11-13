#include <iostream>
#include <string>

class Box {
  
private:
  std::string color;
  int length;
  int width;
  int height;
  
public:
  Box(std::string c, int l, int w, int h) {
    color = c;
    length = l;
    width = w;
    height = h;
  };
  
  ~Box() { }; //destructor

  std::string getColor() { return color; }
  int getLength() { return length; }
  int getWidth() { return width; }
  int getHeight() { return height; }
  int getVolume() { return length*width*height; }
};


int main()
{
  Box b("brown", 3, 6, 9);
  std::cout << "Color of Box b is: " << b.getColor() << std::endl;
  std::cout << "Volume of Box b is: " << b.getVolume() << std::endl;
}
