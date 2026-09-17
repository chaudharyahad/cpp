#include <iostream>
using namespace std;

void greet(); // Function declaration

// Function with return value
int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int result, num = 5;
    // Calling the function
    greet();

    // Calling multiply function
    result = multiply(num, 10);

    cout << "Multiplication result: " << result << endl;

    return 0;
}

// Function definition
void greet()
{
    cout << "Welcome to C++ Programming" << endl;
}