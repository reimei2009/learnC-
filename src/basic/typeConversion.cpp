#include "typeConversion.h"
#include <iostream>

using namespace std;

void typeConversion::ex(int n) {
    char c = n;
    cout << static_cast<int>(c) << endl;
}
