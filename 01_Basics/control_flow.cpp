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

    // Looping Statement in Programming
    cout << "==========================\n";
    cout << "For Loop\n";
    cout << "==========================\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }

    cout << "==========================\n";
    cout << "While Loop\n";
    cout << "==========================\n";

    int i = 1;
    while (i <= 10)
    {
        cout << a << " * " << i << " = " << a * i << endl;
        i++;
    }

    cout << "==========================\n";
    cout << "do-While Loop\n";
    cout << "==========================\n";

    int j = 1;
    do
    {
        cout << a << " * " << j << " = " << a * j << endl;
        j++;
    } while (j <= 10);

    cout << "==========================\n";
    cout << "Nested Loop\n";
    cout << "==========================\n";

    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        while (j < 5)
        {
            cout << "i = " << i << " j = " << j << endl;
            j++;
        }
    }

    // Jump Statements in Programming

    cout << "==========================\n";
    cout << "Continue Statement\n";
    cout << "==========================\n";

    for (int k = 0; k < 10; k++)
    {
        if (k % 2 == 1)
        {
            continue;
        }
        cout << k << " " << endl;
    }

    cout << "==========================\n";
    cout << "goto Statement\n";
    cout << "==========================\n";

    int l = 0;

loopStart:
    if (l < 5)
    {
        cout << l << endl;
        l++;
        goto loopStart;
    }
    return 0;
}