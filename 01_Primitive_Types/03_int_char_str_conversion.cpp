/*
Int, Char, and String Conversion
----------------------------------
1. Character <-> Integer Conversion
2. Interger <-> String Conversion
3. Character <-> String Conversion
*/

#include <iostream>
#include <string> // Required for std::to_string and std::stoi
using namespace std;

int main()
{
    // Character to Integer Conversion: Option 1 (static_cast)
    char ch = 'A';
    int ascii_value = static_cast<int>(ch);
    cout << "Character: " << ch << " -> ASCII Value: " << ascii_value << endl; // Output: 65

    // Character to Integer Conversion: Option 2 (Implicit)
    int ascii_value2 = ch;
    cout << "Character: " << ch << " -> ASCII Value (Implicit): " << ascii_value2 << endl; // Output: 65

    // Digit Character('0' - '9') to Integer Conversion
    char digit_char = '5';
    int digit_value = digit_char - '0';                                                        // ASCII subtraction
    cout << "Digit Character: " << digit_char << " -> Integer Value: " << digit_value << endl; // Output: 5

    // Integer to Character Conversion
    int num = 66;
    char character = static_cast<char>(num);
    cout << "ASCII Value: " << num << " -> Character: " << character << endl; // Output: B

    // Interger (0-9) to Digit Character Conversion
    int digit = 7;
    char digit_char_converted = '0' + digit;                                                       // ASCII addition
    cout << "Integer Value: " << digit << " -> Digit Character: " << digit_char_converted << endl; // Output: '7'

    // Integer to String Conversion
    int number = 12345;
    string str_number = to_string(number);
    cout << "Integer: " << number << " -> String: " << str_number << endl; // Output: "12345"

    // String to Integer Conversion
    string str_num = "67890";
    int int_number = stoi(str_num);
    cout << "String: " << str_num << " -> Integer: " << int_number << endl; // Output: 67890

    // Character to String Conversion
    char single_char = 'Z';
    string str_char(1, single_char);
    cout << "Character: " << single_char << " -> String: " << str_char << endl; // Output: "Z"

    // String to Character Conversion
    string str_single_char = "Y";
    char char_from_str = str_single_char[0];
    cout << "String: " << str_single_char << " -> Character: " << char_from_str << endl; // Output: 'Y'

    return 0;
}