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
void passByPointer(int *c)
{
    *c = 70;
}

// Recursion function
void countDown(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    countDown(n - 1);
}

int main()
{
    int result, num = 5, a = 10, b = 20, c = 30;
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

    cout << "======================" << endl;
    cout << "Pass by Pointer" << endl;
    cout << "======================" << endl;

    passByPointer(&c);
    cout << "c: " << c << endl;

    cout << "======================" << endl;
    cout << "Recursion" << endl;
    cout << "======================" << endl;

    countDown(5);

    return 0;
}

// Function definition
void greet()
{
    cout << "Welcome to C++ Programming" << endl;
}