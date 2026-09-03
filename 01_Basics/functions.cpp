#include <iostream>
using namespace std;

// Function definition
void greet()
{
    cout << "Welcome to C++ Programming" << endl;
}

// Function with return value
int multiply(int x, int y)
{
    return x * y;
}

// Pass by value
void passByValue(int a)
{
    a = 20;
}

// Pass by reference
void passByReference(int &b)
{
    b = 50;
}

int main()
{
    int num = 5;
    int result;

    // Calling the function
    greet();

    // Calling multiply function
    result = multiply(num, 10);

    cout << "Multiplication result: " << result << endl;

    cout << "======================" << endl;
    cout << "Pass by Value" << endl;
    cout << "======================" << endl;

    int a = 10;

    passByValue(a);

    cout << "a: " << a << endl;

    cout << "======================" << endl;
    cout << "Pass by Reference" << endl;
    cout << "======================" << endl;

    int b = 20;

    passByReference(b);

    cout << "b: " << b << endl;

    return 0;
}