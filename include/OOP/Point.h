//
// Created by ADMIN on 10/7/2024.
//

#ifndef EX2_H
#define EX2_H

#include <iostream>
using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        Point(double xx = 0 , double yy = 0);
        void Cin();
        void Print();
        void Move(double dx, double dy);
        int duplicateCheck(Point u);
        double distance(Point u);
        Point symmetricPointOx();

};


#endif //EX2_H
