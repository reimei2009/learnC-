//
// Created by ADMIN on 10/7/2024.
//

#include "Variable.h"

int x = 10;
int main() {
    //global
    int x = 20;
    cout << x << endl;
    cout << ::x << endl;

    //Reference
    int n = 10;
    int &r = n;
    cout << n << " " << r << endl;
    r += 10;
    cout << n << " " << r << endl; // r thay doi -> n thay doi
    n += 10;
    cout << n << " " << r << endl;

    cout<< min(2,5) << endl;
    float a = 2.5f;
    float b = 1.2f;
    cout << min(a,b) << endl;


}

int min (int a, int b) {
    return a < b ? a : b ; // tra ve a neu a < b , nguoc lai
}

float min (float a, float b) {
    return a < b ? a : b;
}