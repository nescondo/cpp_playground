#include <iostream>

enum class Color { red, blue, green }; //scoped to its own enum class
enum class Traffic_light { red, yellow, green }; //scoped to its own enum class

//enum classes only have assignment, initialization, and comparisons defined, but we can define operators for it ourselves
  Traffic_light& operator++(Traffic_light& tl)
  {
    switch (tl) {
    case Traffic_light::red: { return tl = Traffic_light::yellow; }
    case Traffic_light::yellow: { return tl = Traffic_light::green; }
    case Traffic_light::green: { return tl = Traffic_light::red; }
    }
  }


int main()
{
  enum Day { MON, TUE, WED, THU, FRI, SAT, SUN }; //'plain' enum
  
  // same enum values are not conflicting due to enum class scope
  Color c = Color::red; //red scoped to its own Color enum class value, red
  Traffic_light light = Traffic_light::red; //red scoped to its own Traffic_light enum class value, red

  for (int dayInt=MON; dayInt<=SUN; ++dayInt) {
    Day d = static_cast<Day>(dayInt);
    std::cout << "today is: " << d << std::endl; //will always print out numerical value as enums are numbered alongside its 'descriptive name'
  }

  std::cout << "\n";

  //cannot implicitly print enum class types out, as they are very strongly typed
  std::cout << "Color = " << static_cast<int>(c) << std::endl; 
  std::cout << "Light = " << static_cast<int>(light) << std::endl;
  
  //testing our overloading prefix ++ increment for Traffic_light enum class
  Traffic_light next = ++light;
  std::cout << "next = " << static_cast<int>(light) << std::endl;
}
