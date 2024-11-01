#include "Array2DOOP.h"

// Constructor
Array2DOOP::Array2DOOP(int rows, int cols) {
    if (rows >= 0 && cols >= 0) {
        this->rows = rows;
        this->cols = cols;
        matrix = new int*[rows];

        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    } else {
        this->rows = 0;
        this->cols = 0;
        matrix = nullptr;
    }
}

void Array2DOOP::CinMatrix() {
    if (matrix == nullptr) {
        cout << "Matrix is not initialized!" << endl;
        return;
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << "Element at [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
}

// Hiển thị ma trận
void Array2DOOP::PrintMatrix() {
    if (matrix == nullptr) {
        cout << "Matrix is not initialized!" << endl;
        return;
    }

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

Array2DOOP::~Array2DOOP() {
    if (matrix != nullptr) {
        // Giải phóng bộ nhớ cho từng hàng
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        // Giải phóng bộ nhớ cho mảng con trỏ hàng
        delete[] matrix;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    Array2DOOP mt(rows, cols);
    mt.CinMatrix();
    mt.PrintMatrix();

    return 0;
}

