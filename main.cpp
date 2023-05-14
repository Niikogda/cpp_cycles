
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "Введіть першу межу діапазону: ";
    cin >> a;
    cout << "Введіть другу межу діапазону: ";
    cin >> b;

    int start, end;
    if (a < b) {
        start = a;
        end = b;
    }
    else {
        start = b;
        end = a;
    }

    cout << "Всі числа з діапазону в порядку зростання: ";
    for (int i = start; i <= end; i++) {
        cout << i << "   ";
    }
    cout << endl;

    cout << "Парні числа з діапазону: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;


    cout << "Непарні числа з діапазону: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Числа, кратні 7: ";
    for (int i = start; i <= end; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
