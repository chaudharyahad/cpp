#include <iostream>
using namespace std;

void greet(); // Function declaration

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
    int result, num = 5, a = 10, b = 20;
    // Calling the function
    greet();

    // Calling multiply function
    result = multiply(num, 10);

    cout << "Multiplication result: " << result << endl;

    cout << "======================" << endl;
    cout << "Pass by Value" << endl;
    cout << "======================" << endl;

    passByValue(a);

    cout << "a: " << a << endl;

    cout << "======================" << endl;
    cout << "Pass by Reference" << endl;
    cout << "======================" << endl;

    passByReference(b);

    cout << "b: " << b << endl;

    return 0;
}

// Function definition
void greet()
{
    cout << "Welcome to C++ Programming" << endl;
}