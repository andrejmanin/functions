#include <iostream>
using namespace std;

int binSearch(int array[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == key) {
            return mid;
        }

        if (array[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = std::size(arr);
    int key;

    cout << "Введіть елемент для пошуку: ";
    cin >> key;

    int index = binSearch(arr, size, key);

    index != -1 ? cout << "Елемент знайдено на індексі: " << index << endl : cout << "Елемент не знайдено в масиві." << endl;

    return 0;
}
