/*
 Problem: Reverse the bits of a 64-bit integer.
*/
#include <iostream>
using namespace std;

unsigned long long ReverseBits_Algo1(unsigned long long x)
{
    unsigned long long result = 0;
    for (int i = 0; i < 64; ++i)
    {
        result <<= 1;            // Shift result to the left to make space for the next bit
        result |= (x & 1);      // Add the least significant bit of x to result
        x >>= 1;                // Shift x to the right to process the next bit
    }
    return result;
}

unsigned long long ReverseBits_Algo2(unsigned long long x)
{
    int left = 0, right = 63;
    while (left < right)
    {
        // Check if the bits at left and right positions are different
        if (((x >> left) & 1) != ((x >> right) & 1))
        {
            // Create a bitmask with 1s at positions left and right
            unsigned long long bitMask = (1ULL << left) | (1ULL << right);
            x ^= bitMask; // Swap the bits by toggling them
        }
        ++left;
        --right;
    }
    return x;
}

// PreComputed lookup table for reversing 16-bit values
unsigned long long precomputed_reverse[65536];
void InitializePrecomputedReverse()
{
    precomputed_reverse[0] = 0;
    precomputed_reverse[1] = 32768;

    for (int i = 2; i < 65536; ++i)
    {
        // Explanation:
        // The reverse of i can be derived from the reverse of i >> 1 (which is precomputed_reverse[i >> 1])
        // by shifting it right by 1 bit and then OR-ing it with the least significant bit of i shifted left by 15 positions.
        precomputed_reverse[i] = (precomputed_reverse[i >> 1] >> 1) | ((i & 1) ? 32768 : 0);
    }
}

unsigned long long ReverseBits_Algo3(unsigned long long x)
{
    const int kWordSize = 16;
    const int kBitMask = 0xFFFF;

    return (precomputed_reverse[x & kBitMask] << (3 * kWordSize)) |
           (precomputed_reverse[(x >> kWordSize) & kBitMask] << (2 * kWordSize)) |
           (precomputed_reverse[(x >> (2 * kWordSize)) & kBitMask] << kWordSize) |
           (precomputed_reverse[(x >> (3 * kWordSize)) & kBitMask]);
}

int main()
{
    InitializePrecomputedReverse();

    unsigned long long x = 0b0110011010101010101010101010101;
    // unsigned long long x = 861230421;  
    cout << "Original number: " << x << endl;
    cout << "Reversed bits (Algo 1): " << ReverseBits_Algo1(x) << endl;
    cout << "Reversed bits (Algo 2): " << ReverseBits_Algo2(x) << endl;
    cout << "Reversed bits (Algo 3): " << ReverseBits_Algo3(x) << endl;
    return 0;  
}