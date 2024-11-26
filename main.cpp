#include <iostream>
using namespace std;

void initMatrix(int matrix[][10], int size, int value) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = value;
        }
    }
}

void printMatrix(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void findMinMaxDiagonal(int matrix[][10], int size, int &minVal, int &maxVal) {
    minVal = maxVal = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

void sortRows(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            for (int k = j + 1; k < size; k++) {
                if (matrix[i][j] > matrix[i][k]) {
                    swap(matrix[i][j], matrix[i][k]);
                }
            }
        }
    }
}

int main() {
    const int size = 4;
    int matrix[10][10];
    initMatrix(matrix, size, 5);
    matrix[1][1] = 2;
    matrix[2][2] = 9;
    printMatrix(matrix, size);

    int minVal, maxVal;
    findMinMaxDiagonal(matrix, size, minVal, maxVal);
    cout << "Мінімум на діагоналі: " << minVal << endl;
    cout << "Максимум на діагоналі: " << maxVal << endl;

    sortRows(matrix, size);
    cout << "Матриця після сортування рядків:" << endl;
    printMatrix(matrix, size);

    return 0;
}
