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
        cout << "��������� �����:" << endl;
        cout << "1. ������ �� �����" << endl;
        cout << "2. ���� �� �����" << endl;
        cout << "3. �����" << endl;
        cout << "��� ����: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "������ ������� ������: ";
            cin >> amount;
            result = amount * USD_UAH;
            cout << amount << " ������ = " << result << " �������" << endl;
            break;
        case 2:
            cout << "������ ������� ����: ";
            cin >> amount;
            result = amount * EUR_UAH;
            cout << amount << " ���� = " << result << " �������" << endl;
            break;
        case 3:
            cout << "�� ���������!" << endl;
            break;
        default:
            cout << "������������ ����. ��������� �� ���." << endl;
            break;
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}
