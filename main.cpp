#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num, sum = 0;
    cout << "B����� 0 ��� ������� � ������������ ����." << endl;
    while (true) {
       cout << "������� �����-> " << endl;
        cin >> num;

        if (num == 0) {
            break;
        }
        sum += num;

    }
    cout << "���� ����� �����: "<<sum;
    
}
