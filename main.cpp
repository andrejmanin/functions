#include <iostream>
using namespace std;

int nsd(int a, int b) {
    if (b == 0)
        return a;
    return nsd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Введіть два числа: ";
    cin >> num1 >> num2;
    cout << "Найбільший спільний дільник: " << nsd(num1, num2) << endl;
    return 0;
}
