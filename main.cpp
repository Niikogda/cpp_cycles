#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num, sum = 0;
    cout << "Bведіть 0 для зупинки і прорахування суми." << endl;
    while (true) {
       cout << "вводьте числа-> " << endl;
        cin >> num;

        if (num == 0) {
            break;
        }
        sum += num;

    }
    cout << "сума ваших чисел: "<<sum;
    
}
