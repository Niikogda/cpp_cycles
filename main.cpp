
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "������ ����� ���� ��������: ";
    cin >> a;
    cout << "������ ����� ���� ��������: ";
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

    cout << "�� ����� � �������� � ������� ���������: ";
    for (int i = start; i <= end; i++) {
        cout << i << "   ";
    }
    cout << endl;

    cout << "���� ����� � ��������: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;


    cout << "������ ����� � ��������: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "�����, ����� 7: ";
    for (int i = start; i <= end; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
