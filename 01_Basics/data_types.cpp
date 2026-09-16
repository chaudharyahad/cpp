#include <iostream>

using namespace std;

int main()
{
    // Integer variable
    int number = 10;
    cout << "Integer: " << number << endl;
    cout << "Size: " << sizeof(number) << " bytes" << endl;
    
    cout << "=======================" << endl;
    // Character variable
    char character = 'A';
    cout << "Character: " << character << endl;
    cout << "Size: " << sizeof(character) << " byte" << endl;

    return 0;
}