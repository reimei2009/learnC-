//
// Created by ADMIN on 10/7/2024.
//

#ifndef ARRAY2DOOP_H
#define ARRAY2DOOP_H

#include <iostream>
using namespace std;

class Array2DOOP {
    private:
        int rows, cols;
        int **matrix;
    public:
        Array2DOOP(int rows = 0, int cols = 0);
        ~Array2DOOP();
        void CinMatrix();
        void PrintMatrix();
};

#endif //ARRAY2DOOP_H
