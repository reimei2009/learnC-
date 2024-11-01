#include "../../include/pointer/TestPointer.h"
#include "pointer1.h"
#include "sizeOf.h"
#include "changeValue.h"
#include "toUpper.h"
#include "maxArray.h"
#include "sumArray.h"

int main() {
    cout << "Test pointer1: " << endl;
    pointer1();

    cout << endl << endl;

    cout << "Test sizeOf: " << endl;
    sizeOf();

    cout << endl << endl;

    cout << "Test sizeOf2: " << endl;
    sizeOf2();

    cout << endl << endl;

    cout << "Test changeValue: " << endl;
    int value = 5;
    changeValue(&value);

    cout << endl << endl;

    cout << "Test toUpper: " << endl;
    string s;
    upper(&s);

    cout << endl << endl;

    cout << "Test maxArray: " << endl;
    int n;
    cout << "Enter the number of elements for the array: ";
    cin >> n;
    display(n);

    cout << endl << endl;

    cout << "Test sumArray: " << endl;
    cout << "Enter the number of elements for the array: ";
    cin >> n;
    sumArray(n);

    return 0;
}
