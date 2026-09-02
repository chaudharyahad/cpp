#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    // Taking input from the user
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Displaying the entered information
    cout << "My name is " << name
         << " and I am " << age << " years old." << endl;

    // Standard error stream
    cerr << "This is an example of an error message." << endl;

    // Standard logging stream
    clog << "This is an example of a log message." << endl;

    return 0;
}
