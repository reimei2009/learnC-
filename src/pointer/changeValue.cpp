//
// Created by ADMIN on 10/4/2024.
//

#include "changeValue.h"
void change(int* p) {
    (*p)++;
}

void changeValue(int* p) {
    cout << "Enter a: " << endl ;
    int a;
    cin >> a;
    change(&a);
    cout << "New value: " << a << endl;
}