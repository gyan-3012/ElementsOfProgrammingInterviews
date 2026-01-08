/*
 Problem: Swap bits at positions i and j in an integer.
*/

#include <iostream>
using namespace std;

long SwapBits(long x, int i, int j)
{
    if (((x >> i) & 1) != ((x >> j) & 1))
    {
        // Create a bitmask with 1s at positions i and j
        // and XOR it with x to swap the bits
        long bitMask = (1L << i) | (1L << j);
        x ^= bitMask;
    }

    return x;
}

int main()
{
    long x = 12; // Binary: 1100
    int i = 1, j = 3;
    cout << "Original number: " << x << endl;
    cout << "Swapped bits: " << SwapBits(x, i, j) << endl;
    return 0;
}