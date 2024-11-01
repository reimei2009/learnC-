#include <arrayAndPointer.h>
int main() {
    int value = 5;
    int *ptr = &value;

    operatorPointer(ptr);

    int array[5] = {1, 2, 3, 4, 5};
    printArray(array);

    return 0;
}

void operatorPointer(int *ptr) {
    cout << ptr << '\n';
    cout << *ptr << endl;
}

void printArray(int *array) {
    cout << &array[1] << endl;
    cout << array + 1 << endl;

    cout << array[1] << endl;
    cout << *(array + 1) << endl;
}

void setArray() {
    cout << "Enter size of array: " << "\n";
    int size;
    cin >> size;

    int *array = new int[size] {1,2,3,4};

    delete[] array;
}