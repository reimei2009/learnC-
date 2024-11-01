#include "printOddNumbers.h"
#include <iostream>
using namespace std;

void printOddNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
}


