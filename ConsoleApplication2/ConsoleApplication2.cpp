#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));

    cout << "Кости" << endl;

    char playAgain;

    do {
        int dice1 = rollDice();
        int dice2 = rollDice();

        cout << "Вам выпало число " << dice1 << " и число " << dice2 << endl;

        cout << "Бросить кости снова?? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}