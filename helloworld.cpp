#include <iostream>
using namespace std;

int main()
{
    // Add Reference & Pointer
    int x = 5;
    int *y = &x;

    cout << "y:  " << y << endl;  // 0x16d29b208
    cout << "*y: " << *y << endl; // 5

    // Change value of pointer
    *y = 182;
    cout << "x : " << x << endl; // 182

    // Print-out result
    cout << "&x : " << &x << endl; // 0x16d29b208
    cout << "y : " << y << endl;   // 0x16d29b208

    // Array Dealing
    int a[] = {1, 2, 3};
    int *initial = &a[0];
    int second = *initial + *initial;
    cout << "second value: " << second << endl;

    // Change value of point with array
    *initial = 12;
    cout << "beginning: " << *initial << endl; // It changed

    // Loop
    for (int i = 0; i < sizeof(a); i++)
    {
        int *pointer = &a[i];
        if (i == sizeof(a) - 1)
        {
            if (*pointer != 2)
            {
                cout << "Search 2: not found" << endl;
            }
            if (*pointer != 5)
            {
                cout << "Search 5: not found" << endl;
            }
        }
        else
        {
            if (*pointer == 2)
            {
                cout << "Search 2: " << i << endl;
                break;
            }
            if (*pointer == 5)
            {
                cout << "Search 5: " << i << endl;
                break;
            }
        }
    }

    // Hello World
    cout << "Hello World!" << endl;
    return 0;
}