#include <iostream>

using namespace std;

int main()
{

    cout << "=======================" << endl;
    cout << "Basic Data Types" << endl;
    cout << "=======================" << endl;

    // Integer variable
    int number = 10;
    cout << "Integer: " << number << endl;
    cout << "Size: " << sizeof(number) << " bytes" << endl;

    cout << "=======================" << endl;
    // Character variable
    char character = 'A';
    cout << "Character: " << character << endl;
    cout << "Size: " << sizeof(character) << " byte" << endl;

    cout << "=======================" << endl;
    // Boolean variable
    bool isTrue = true;
    cout << "Boolean: " << isTrue << endl;
    cout << "Size: " << sizeof(isTrue) << " byte" << endl;

    cout << "=======================" << endl;
    // Floating-point variable
    float decimalNumber = 12.231f;
    cout << "Float: " << decimalNumber << endl;
    cout << "Size: " << sizeof(decimalNumber) << " bytes" << endl;

    cout << "=======================" << endl;
    // Double-precision floating-point variable
    double pi = 3.14161342;
    cout << "Double: " << pi << endl;
    cout << "Size: " << sizeof(pi) << " bytes" << endl;

    cout << "=======================" << endl;

    return 0;
}