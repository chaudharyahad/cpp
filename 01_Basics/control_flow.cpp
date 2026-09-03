#include <iostream>
using namespace std;
int main()
{

    int a = 10;

    cout << "==========================\n";
    cout << "if-else Statement\n";
    cout << "==========================\n";

    if (a == 18)
    {
        cout << "a is equal to 18" << endl;
    }
    else
    {
        cout << "a is not equal to 18" << endl;
    }

    cout << "==========================\n";
    cout << "if-else-if Statement\n";
    cout << "==========================\n";

    if (a == 20)
    {
        cout << "a is equal to 20" << endl;
    }
    else if (a == 10)
    {
        cout << "a is equal to 10" << endl;
    }
    else
    {
        cout << "a is not equal to 20 or 10";
    }

    cout << "==========================\n";
    cout << "Ternary or Conditional Operators\n";
    cout << "==========================\n";

    cout << ((a == 10) ? "a is equal to 10" : "a is not equal to 10") << endl;

    cout << "==========================\n";
    cout << "Switch-Case Statement\n";
    cout << "==========================\n";

    switch (a)
    {
    case 5:
        cout << "a is equal to 5" << endl;
        break;
    case 10:
        cout << "a is equal to 10" << endl;
        break;
    default:
        cout << "a is not equal to 5 or 10" << endl;
    }

    cout << "==========================\n";
    cout << "For Loop\n";
    cout << "==========================\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }

    return 0;
}