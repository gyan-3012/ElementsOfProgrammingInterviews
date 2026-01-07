/*
Important C++ cmath functions and their implementations.
-----------------------------------------------------------
-> Header file: <cmath>
Key Functions:
- abs(x)      → Returns the absolute value of an integer x.
- fabs(x)     → Returns the absolute value of a floating-point number x.
- ceil(x)     → Returns the smallest integer greater than or equal to x.
- floor(x)    → Returns the largest integer less than or equal to x.
- min(x, y)   → Returns the smaller of two values x and y.
- max(x, y)   → Returns the larger of two values x and y.
- pow(x, y)   → Returns x raised to the power of y.
- log(x)      → Returns the natural logarithm of x.
- sqrt(x)     → Returns the square root of x.
*/

#include <iostream>
#include <cmath> // Required for math functions
using namespace std;

int main()
{
    cout << "abs(-34) = " << abs(-34) << endl;       // 34
    cout << "fabs(-3.14) = " << fabs(-3.14) << endl; // 3.14
    cout << "ceil(2.17) = " << ceil(2.17) << endl;   // 3
    cout << "floor(3.14) = " << floor(3.14) << endl; // 3

    int x = 10, y = -20;
    cout << "min(x, -4) = " << min(x, -4) << endl;             // -4
    cout << "max(3.14, y) = " << max(3.14, (double)y) << endl; // 3.14

    cout << "pow(2.71, 3.14) = " << pow(2.71, 3.14) << endl; // ~23.14
    cout << "log(7.12) = " << log(7.12) << endl;             // ~1.96
    cout << "sqrt(225) = " << sqrt(225) << endl;             // 15

    return 0;
}