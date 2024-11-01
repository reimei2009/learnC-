//
// Created by ADMIN on 10/7/2024.
//

#include "Point.h"

#include <cmath>

Point::Point(double xx, double yy) {
    x = xx;
    y = yy;
}

void Point::Move(double dx, double dy) {
    x += dx;
    y += dy;
}

int Point::duplicateCheck(Point u) {
    return x == u.x && y == u.y;
}

double Point::distance(Point u) {
    return sqrt(pow(x - u.x, 2) + pow(y - u.y, 2));
}

Point Point::symmetricPointOx() {
    Point res;
    res.x = x;
    res.y = -y;
    return res;
}





void Point::Print() {
    cout << "x: " << x << " , " << " y: " << y << endl;
}


void Point::Cin() {
    cout << "Enter X coordinate: ";
    cin >> x;
    cout << "Enter Y coordinate: ";
    cin >> y;
}

int main() {
    Point d;
    d.Cin();
    d.Print();
    d.Move(2,3);
    cout << "Moved!" << endl;
    Point d1 = d.symmetricPointOx();
    d1.Print();

    Point p;
    p.Cin();
    p.Print();
    p.Move(3,5);
    cout << "Moved!" << endl;
    cout << p.distance(d) << endl;

    cout << "Check duplicate: " << d.duplicateCheck(p) << endl;


    return 0;
}





