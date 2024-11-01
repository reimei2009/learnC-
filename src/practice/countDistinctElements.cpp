#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void input(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element at index[" << i << "] = ";
        cin >> arr[i];
    }
}

int countDistinctElements(int arr[], int size) {
    int count = 0;
    bool isDistinct;

    for (int i = 0; i < size; i++) {
        isDistinct = true;
        for (int j = 0; j < count; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            arr[count] = arr[i];
            count++;
        }
    }
    return count;
}

void printDistinctElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of array (max " << MAX_SIZE << "): ";
    cin >> size;

    if (size > MAX_SIZE) {
        cout << "Size exceeds maximum limit." << endl;
        return 1;
    }

    int arr[MAX_SIZE];
    input(arr, size);

    int distinctCount = countDistinctElements(arr, size);

    cout << "Number of distinct elements: " << distinctCount << endl;
    cout << "Distinct elements: ";
    printDistinctElements(arr, distinctCount);

    return 0;
}
