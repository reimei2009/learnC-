#include "Array1D.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int a[n];

    cout << "Nhap 10 so nguyen: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sum1D(a, n);
    cout << endl << "So lon nhat: ";
    max1D(a, n);
    cout << endl << "Tong so dau va cuoi: ";
    sum2(a, n);
    cout << endl << "Tong cac so chan: ";
    sumEvenNumber(a, n);
    cout << endl << "Sap xep mang tang dan: ";
    increasing(a, n);
    cout << endl;

    // Test Matrix 2D
    int rows = 2, cols = 3;
    int matrix[2][10] = { {5, 10, 15}, {20, 25, 30} };

    cout << endl << "Test mang 2D: " << endl;
    sum2D(rows, cols, matrix);
    numberDivisibleBy5(rows, cols, matrix);

    return 0;
}
