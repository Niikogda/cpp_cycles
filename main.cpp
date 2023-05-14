#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int nums;
    cout << "¬вед≥ть останнЇ число списку -> " << endl;
    cin >> nums;

    for (int i = 1; i <= nums; i++)
    {
        cout << i << endl;
    }

    return 0;
}
