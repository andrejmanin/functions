#include <iostream>
#include <cmath>
using namespace std;


int binToDec(long long bin) {
    int dec = 0;
    int power = 0;

    while (bin > 0) {
        int lastDigit = bin % 10;
        dec += lastDigit * pow(2, power);
        bin /= 10;
        power++;
    }

    return dec;
}

int main() {
    long long binNum;

    cout << "Введіть двійкове число: ";
    cin >> binNum;

    int decimalNumber = binToDec(binNum);

    cout << "Число у десятковій системі: " << decimalNumber << endl;

    return 0;
}
