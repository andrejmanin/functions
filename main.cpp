#include <iostream>
using namespace std;

int linSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 25, 30, 45, 50, 60};
    int size = std::size(arr);
    int key;

    cout << "Введіть елемент для пошуку: ";
    cin >> key;

    int index = linSearch(arr, size, key);

    index != -1 ? cout << "Елемент знайдено на індексі: " << index << endl : cout << "Елемент не знайдено в масиві." << endl;

    return 0;
}
