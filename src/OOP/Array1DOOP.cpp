#include "Array1DOOP.h"


void Array1DOOP::Cin() {
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    arr = new int[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Hàm hủy để giải phóng bộ nhớ động
Array1DOOP::~Array1DOOP() {
    delete[] arr;  // Giải phóng bộ nhớ
    arr = nullptr;  // Đặt con trỏ về null
}


Array1DOOP::Array1DOOP(int n) {
    this->n = n;
    if (n == 0) {
        arr = nullptr;  // Nếu không có phần tử, không cấp phát bộ nhớ
    } else {
        arr = new int[n];
    }
}


void Array1DOOP::display() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Array1DOOP arr1(5);
    arr1.Cin();
    arr1.display();
    return 0;
}
