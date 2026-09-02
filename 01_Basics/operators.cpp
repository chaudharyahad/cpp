#include <iostream>
using namespace std;

int main()
{
    cout << "==========================\n";
    cout << "Airthmetic Operator\n";
    cout << "==========================\n";

    int a = 10, b = 3;
    // Addition
    cout << "a + b = " << (a + b) << endl;

    // Subtraction
    cout << "a - b = " << (a - b) << endl;

    // Multiplication
    cout << "a * b = " << (a * b) << endl;

    // Division
    cout << "a / b = " << (a / b) << endl;

    // Modulos
    cout << "a % b = " << (a % b) << endl;

    // Increament
    cout << "++a = " << ++a << endl;

    // Decrement
    cout << "b-- = " << b--;

    cout << "\n==========================\n";
    cout << "Relational Operator\n";
    cout << "==========================\n";

    // Less than Operator
    cout << "a < b = " << (a < b) << endl;

    // Greator than Operator
    cout << "a > b = " << (a > b) << endl;

    // Less than Equal to Operator
    cout << "a <= b = " << (a <= b) << endl;

    // Greater than Equal to Operator
    cout << "a >= b = " << (a >= b) << endl;

    // Equal to Operator
    cout << "a == b = " << (a == b) << endl;

    // Not Equal to Operator
    cout << "a != b = " << (a != b) << endl;

    cout << "==========================\n";
    cout << "Logical Operator\n";
    cout << "==========================\n";

    // Logical AND Operator
    cout << "a && b = " << (a && b) << endl;

    // Logical OR Operator
    cout << "a || b = " << (a || b) << endl;

    // Logical NOT Operator
    cout << " !b = " << (!b) << endl;

    cout << "==========================\n";
    cout << "BitWise Operator\n";
    cout << "==========================\n";

    // Bitwise AND Operator    
    cout << "a & b = " << (a & b) << endl;

    // Bitwise OR Operator
    cout << "a | b = " << (a | b) << endl;

    // Bitwise XOR Operator
    cout << "a ^ b = " << (a ^ b) << endl;

    // Bitwise NOT Operator
    cout << "~b = " << (~b) << endl;

    // Bitwise Left Shift Operator
    cout << "a << b = " << (a << b) << endl;

    // Bitwise Right Shift Operator
    cout << "a >> b = " << (a >> b) << endl;

    cout << "==========================\n";
    cout << "Assignment Operator\n";
    cout << "==========================\n";

     // Assignment Operator.
    cout << "a = " << a << endl;
  
    // Add and Assignment Operator.
    cout << "a += b is " << (a += b) << endl;
  
    // Subtract and Assignment Operator.
    cout << "a -= b is " << (a -= b) << endl;
  
    // Multiply and Assignment Operator.
    cout << "a *= b is " << (a *= b) << endl;
  
    // Divide and Assignment Operator.
    cout << "a /= b is " << (a /= b);

    return 0;
}