//
// Created by ADMIN on 10/7/2024.
//

#include "Point2.h"

#include "Point.h"

void Point2::Print() {
    cout << x << ", " << y << endl;
}

int main() {
    Point2 p1(3,4);
    p1.Print();
    Point2 *p = &p1;
    p->Print();
    delete p;
}
