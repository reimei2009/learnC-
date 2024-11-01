//
// Created by ADMIN on 10/4/2024.
//

#include "sizeOf.h"

void sizeOf() {
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(short): " << sizeof(short) << std::endl;
    std::cout << "sizeof(long): " << sizeof(long) << std::endl;
    std::cout << "sizeof(long long): " << sizeof(long long) << std::endl;
    std::cout << "sizeof(char): " << sizeof(char) << std::endl;
    std::cout << "sizeof(unsigned char): " << sizeof(unsigned char) << std::endl;
    std::cout << "sizeof(short): " << sizeof(short) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(float): " << sizeof(float) << std::endl;
}

void sizeOf2() {
    int number = 9 ;
    int *p1 ;
    p1 = &number ;

    char* p2 = (char*)&number ;
    double *p3 = (double*)&number ;

    cout << "sizeof p1: " << sizeof(p1) << endl;
    cout << "sizeof p2: " << sizeof(p2) << endl;
    cout << "sizeof p3: " << sizeof(p3) << endl;

}
