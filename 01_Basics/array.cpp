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

    // Size of one element of an array
    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;

    // Size of  'arr'
    cout << "Size of arr: " << sizeof(arr) << endl;

    // Length of an array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of an array: " << n << endl;

    cout << "=======================" << endl;
    cout << "Multi-Dimensional Array" << endl;
    cout << "=======================" << endl;

    // 2D Declare and initialize a 2D array
    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Accessing 2D array elements using indexes
    cout << "Element at [0][0]: " << arr2D[0][0] << endl;
    cout << "Element at [1][2]: " << arr2D[1][2] << endl;

    // Modifying a 2D array element
    arr2D[0][1] = 20;
    cout << "Modified element at [0][1]: " << arr2D[0][1] << endl;

    // Traversing and displaying the 2D array
    cout << "Modified 2D array:" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2D[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
