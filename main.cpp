#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double USD_UAH = 37.5; 
    const double EUR_UAH = 39.0; 

    int choice;
    double amount, result;

    do {
        cout << "Конвертер валют:" << endl;
        cout << "1. Долари до гривні" << endl;
        cout << "2. Євро до гривні" << endl;
        cout << "3. Вихід" << endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введіть кількість доларів: ";
            cin >> amount;
            result = amount * USD_UAH;
            cout << amount << " доларів = " << result << " гривень" << endl;
            break;
        case 2:
            cout << "Введіть кількість євро: ";
            cin >> amount;
            result = amount * EUR_UAH;
            cout << amount << " євро = " << result << " гривень" << endl;
            break;
        case 3:
            cout << "До побачення!" << endl;
            break;
        default:
            cout << "Неправильний вибір. Спробуйте ще раз." << endl;
            break;
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}
