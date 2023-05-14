#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, summ=0;
    cout << "¬вед≥ть першу межу д≥апазону: ";
    cin >> a;
    cout << "¬вед≥ть другу межу д≥апазону: ";
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
    for (int i = start; i <= end; i++) 
        summ += i;
    cout << "summ = " << summ << endl;
  }