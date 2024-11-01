//
// Created by ADMIN on 10/11/2024.
//
#include <oddFirstDigitAverage.h>

void input(int arr[], int size) {
    for (int i = 0 ; i < size ; i++) {
        cout << "Enter element at index[ " << i << " ] = " ;
        cin >> arr[i];
    }
}

void print(int arr[], int size) {
    for (int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
}

bool check(int x) {
    while (x >= 10 ) {
        x /= 10;
    }
    if (x %2 != 0 ) {
        return true;
    }
    return false;
}

int average(int arr[], int size) {
    int sum = 0;
    int count = 0;
    for (int i = 0 ; i < size ; i++) {
        if (check(arr[i]) == true) {
            sum += arr[i];
            count++;
        }
    }
    return sum*1.0 / count;
}

int main() {
    int arr[1000];
    int size;

    do {
        cout << "Enter number of elements: ";
        cin >> size;
        if (size <= 0 || size > 1000) {
            cout << "Invalid Input" << endl;
        }
    } while (size <= 0 || size > 1000);

    cout << "\n\t\tInput Array\n";
    input(arr, size);

    cout << "\n\t\tOutput Array\n";
    print(arr, size);

    cout << "\nAverage of numbers with odd first digit: " << average(arr, size) << endl;

    system("pause");
    return 0;
}
