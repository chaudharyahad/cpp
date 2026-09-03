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
}