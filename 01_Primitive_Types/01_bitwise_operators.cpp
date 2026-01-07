/*
Bitwise operators in C++
-----------------------------------

1. AND (&): Sets each bit to 1 if both bits are 1 else sets to 0.
2. OR (|): Sets each bit to 1 if one of the bits is 1 else sets to 0.
3. XOR (^): Sets each bit to 1 if only one of the bits is 1.
4. NOT (~): Flips all the bits.
5. Left Shift (<<): Shifts all bits to the left by a specified number of positions.
6. Right Shift (>>): Shifts all bits to the right by a specified number of positions.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 7; // binary: 0111
    int b = 4; // binary: 0100

    cout << "a & b = " << (a & b) << endl;   // AND → 4
    cout << "a | b = " << (a | b) << endl;   // OR  → 7
    cout << "a ^ b = " << (a ^ b) << endl;   // XOR → 3
    cout << "~a = " << (~a) << endl;         // NOT → -8 (two's complement)
    cout << "a << 1 = " << (a << 1) << endl; // Left shift → 14
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift → 3

    return 0;
}

/*
Output: -
---------------------------
a & b = 4
a | b = 7
a ^ b = 3
~a = -8
a << 1 = 14
a >> 1 = 3
*/