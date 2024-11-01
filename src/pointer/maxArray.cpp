#include "maxArray.h"

int getMax(int* p, int n) {
    int max = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }
    return max;
}

void display(int n) {
    int* a = new int[n];

    cout << "Enter the number elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Max value in array: " << getMax(a, n) << endl;
    delete[] a;
}
