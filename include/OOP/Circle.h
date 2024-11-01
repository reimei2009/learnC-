//
// Created by ADMIN on 10/2/2024.
//

#ifndef diem_h
#define diem_h
#include <iostream>
#include <cmath>

using namespace std;

class Circle {
    private:
        double radius;
    public:
        Circle(double r = 1.0);
        double getArea() const;
        double getCircumference() const;
        void setRadius(double r);
        double getRadius() const;
};



#endif //EX1_H
