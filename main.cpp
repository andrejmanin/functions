#include <iostream>
#include <ctime>
using namespace std;

void calcBulls_Cows(int secret[], int guess[], int &bulls, int &cows) {
    bulls = cows = 0;
    bool usedSecret[4] = {false}, usedGuess[4] = {false};

    for (int i = 0; i < 4; i++) {
        if (secret[i] == guess[i]) {
            bulls++;
            usedSecret[i] = true;
            usedGuess[i] = true;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (!usedGuess[i]) {
            for (int j = 0; j < 4; j++) {
                if (!usedSecret[j] && guess[i] == secret[j]) {
                    cows++;
                    usedSecret[j] = true;
                    break;
                }
            }
        }
    }
}

int main() {
    srand(time(0));
    int secret[4];

    for (int i = 0; i < 4; i++) {
        secret[i] = rand() % 10;
    }

    cout << "Гра 'Бики та корови'. Вгадайте чотиризначне число.\n";

    int guess[4], bulls, cows, attempts = 0;
    do {
        cout << "Введіть вашу відповідь (4 цифри): ";
        for (int i = 0; i < 4; i++) {
            cin >> guess[i];
        }

        calcBulls_Cows(secret, guess, bulls, cows);
        attempts++;
        cout << "Бики: " << bulls << ", Корови: " << cows << endl;

    } while (bulls < 4);

    cout << "Ви вгадали число за " << attempts << " спроб!\n";
    return 0;
}
