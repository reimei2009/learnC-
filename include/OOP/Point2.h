//
// Created by ADMIN on 10/7/2024.
//

#ifndef POINT2_H
#define POINT2_H

#include <iostream>
using namespace std;

class Point2 {
    private:
        double x;
        double y;
    public:
        void Print();
        Point2(double x = 0, double y = 0) : x(x), y(y){};
};

#endif //POINT2_H
