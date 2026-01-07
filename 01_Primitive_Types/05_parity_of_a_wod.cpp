/*
Problem: Parity of a Word: -
====================================
-> Parity of a binary word is 1 if the number of 1s in the word is odd otherwise it is 0

Examples: -
====================================
I/P: 11 (1011), O/P: 1
I/P: 136 (10001000), O/P: 0

Applications: -
====================================
-> Used to detect single bit errors in data storage and communication
*/

#include <iostream>
using namespace std;

// Brute Force Approach
short Parity_Algo1(unsigned long number)
{
    short parity = 0;

    while (number)
    {
        parity ^= (number & 1);
        number >>= 1;
    }

    return parity;
}

// Efficient Algo 1: drops the lowest set bit in each operation
// TC: O(k), where k is the number of set bits in the number
short Parity_Algo2(unsigned long number)
{
    short parity = 0;

    while (number)
    {
        parity ^= 1;
        number &= (number - 1);
    }

    return parity;
}

// Efficient Algo 2: Caching parity of 16bit words
short NumberParityMap[65536];

void PreComputeParity()
{
    NumberParityMap[0] = 0;
    for (int i = 1; i < 65536; i++)
    {
        NumberParityMap[i] = (i & 1) ^ NumberParityMap[i / 2];
    }
}

short Parity_Algo3(unsigned long number)
{
    int bitSize = 16;
    int bitMask = 0xFFFF;

    return NumberParityMap[(number >> (3 * bitSize))] 
        ^ NumberParityMap[(number >> (2 * bitSize)) & bitMask] 
        ^ NumberParityMap[(number >> bitSize) & bitMask] 
        ^ NumberParityMap[number & bitMask];
}

// Efficient Algo 3: XOR folding
short Parity_Algo4(unsigned long number)
{
    number ^= number >> 32;
    number ^= number >> 16;
    number ^= number >> 8;
    number ^= number >> 4;
    number ^= number >> 2;
    number ^= number >> 1;

    return number & 1;
}

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    cout << "Parity of number (" << n << ") is: " << Parity_Algo1(n) << endl;
    return 0;
}