#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an array
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing array elements using index
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;

    // Modifying an array element
    arr[2] = 10;

    // Traversing and displaying array elements
    cout << "Modified array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
