## 11/10/25: 2hrs 52 minutes - pg. 43 (53/1366)
Began reading The C++ Programming Language (4th Edition) by Bjarne Stroustrup. Brushed up on some history and his beliefs on an overview of best practices within C++. 

Learned new things such as initializing variables with {} - where the compiler DOES NOT implicitly type check the variable. 

Learned about the differences between const and constexpr, where const is an immutable variable defined at either runtime/compile time - constexpr evaluates an expression ALWAYS at compile time, where the resulting expression must be const. 

Additionally, got used to a few Emacs commands and flow with shorts cuts for navigation, accessing the Emacs shell, compiling programs, saving, etc.

## 11/11/25: 3hrs 18mins - pg. 52 (66/1366)
Overall a very good review on pointers, references, structs, and classes. Learned about enums and their uses for descriptive enumerations and how we can use it to represent ‘options’ in a numerical, sensical way.

Pointers are typically used for when we want to be able to change the memory address a pointer points to and also giving the ability for a pointer to hold nullptr/an uninitialized state.

References are NOT pointers, but behave like them. Differences being is that a reference is an alias to an existing object, so we can go ahead and modify it directly (unlike pointers, where we have to use the dereference operator to access the value). Additionally, we cannot change the reference to anything else at any point in time after initialization. They also must always be a reference to something - it cannot be null.

Structs are useful for basic data types without the need of functions. Classes extend structs to allow these functions within these objects to exist, be defined by the compiler and by the user as well. Additionally, classes allow for encapsulation - aka, the ability to hide information of an underlying object while having methods visible and usable to the user as needed.

Had fun getting more used to Emacs and implementing some of the examples.