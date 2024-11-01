#ifndef ARRAY1D_H
#define ARRAY1D_H

#include <iostream>
using namespace std;

class Array1DOOP {
private:
    int n;
    int *arr;
public:
    Array1DOOP(int n = 0);
    ~Array1DOOP();
    void display();
    void Cin();
};

#endif //ARRAY1D_H
