#include "Circle.h"

const double PI = 3.14159265358979323846;

Circle::Circle(double r) : radius(r) {
}

double Circle::getArea() const {
    return PI * radius * radius;
}

double Circle::getCircumference() const {
    return 2 * PI * radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() const {
    return radius;
}


int main() {
    // Tạo đối tượng hình tròn với bán kính mặc định
    Circle circle1;

    // Tạo đối tượng hình tròn với bán kính cụ thể
    Circle circle2(5.0);

    // Hiển thị thông tin về hình tròn 1
    cout << "Circle 1 (default radius):" << endl;
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Circumference: " << circle1.getCircumference() << endl;

    // Hiển thị thông tin về hình tròn 2
    cout << "\nCircle 2 (radius 5.0):" << endl;
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Circumference: " << circle2.getCircumference() << endl;

    // Thay đổi bán kính của hình tròn 1
    circle1.setRadius(10.0);

    // Hiển thị thông tin mới của hình tròn 1
    cout << "\nCircle 1 after setting radius to 10.0:" << endl;
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Circumference: " << circle1.getCircumference() << endl;

    return 0;
}
