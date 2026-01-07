/*
Numeric Limits in C++
-----------------------------------
-> Header file: <limits>
-> Provides information about the properties of fundamental numeric types.

Key Functions:
- min() → Smallest positive value for floating-point types; lowest representable value for integers.
- max() → Largest finite value representable by the type.
- lowest() → Smallest (most negative) value for floating-point and integer types.
- infinity() → Represents positive infinity (only for floating-point types).
- epsilon() → Difference between 1 and the next representable value (floating-point precision).

*/

#include <iostream>
#include <limits> // Required for numeric_limits

int main()
{
    // Integer type
    std::cout << "int min: " << std::numeric_limits<int>::min() << "\n";       // -2147483648
    std::cout << "int max: " << std::numeric_limits<int>::max() << "\n";       // 2147483647
    std::cout << "int lowest: " << std::numeric_limits<int>::lowest() << "\n"; // -2147483648

    // Float type
    std::cout << "float min: " << std::numeric_limits<float>::min() << "\n";           // 1.17549e-38
    std::cout << "float max: " << std::numeric_limits<float>::max() << "\n";           // 3.40282e+38
    std::cout << "float lowest: " << std::numeric_limits<float>::lowest() << "\n";     // -3.40282e+38
    std::cout << "float infinity: " << std::numeric_limits<float>::infinity() << "\n"; // inf
    std::cout << "float epsilon: " << std::numeric_limits<float>::epsilon() << "\n";   // 1.19209e-07

    // Double type
    std::cout << "double min: " << std::numeric_limits<double>::min() << "\n";           // 2.22507e-308
    std::cout << "double max: " << std::numeric_limits<double>::max() << "\n";           // 1.79769e+308
    std::cout << "double lowest: " << std::numeric_limits<double>::lowest() << "\n";     // -1.79769e+308
    std::cout << "double infinity: " << std::numeric_limits<double>::infinity() << "\n"; // inf
    std::cout << "double epsilon: " << std::numeric_limits<double>::epsilon() << "\n";   // 2.22045e-16

    return 0;
}
