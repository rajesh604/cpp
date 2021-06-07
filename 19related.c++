#include <iostream>
#include <limits>

// the below code line is used to know the maximum valus of the data types

int main()
{   
     std::cout << "ull\t"
              << std::numeric_limits<long double>::lowest() << '\t'
              << std::numeric_limits<long double>::max() << std::endl ;
}