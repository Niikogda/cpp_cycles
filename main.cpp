#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int guessNum = rand() % 500 + 1;
    int attempts = 0;

    cout << "Game \'guess the number\'. try to guess the number from 1 to 500." << endl; cout << "if you want to stop-press 0" << endl;

    while (true) {
        int guess;
        cout << "Attemp #" << ++attempts << ": ";
        cin >> guess;

        if (guess == 0) {
            cout << " you`ve stopped the game\n  ";
            break;
        }
        else if (guess == guessNum) {
            cout << "    You won!    " << guessNum << "   with   " << attempts << "   attempts\n";
            break;
        }
        else if (guess < guessNum) {
            cout << "your num is smaller than hidden\n  ";
        }
        else {
            cout << "your number is bigger than hidden\n  ";
        }

    }
    return 0;
}
