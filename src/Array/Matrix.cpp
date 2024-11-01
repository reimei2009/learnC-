#include "Matrix.h"
#include <iostream>

using namespace std;

void sum2D(int rows, int cols, int arr[][10]) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    cout << "Tong cac phan tu trong mang 2D: " << sum << endl;
}

void numberDivisibleBy5(int rows, int cols, int arr[][10]) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 5 == 0) {
                sum += arr[i][j];
            }
        }
    }
    cout << "Tong cac so chia het cho 5: " << sum << endl;
}
