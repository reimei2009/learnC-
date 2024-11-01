#include "sumArray.h"

void sumArray(int n) {
    cout << "Enter the number of elements in the array: ";
    int* arr = new int[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum = " << sum << endl;
    delete[] arr;
}
