//
// Created by ADMIN on 10/2/2024.
//

#include "pointer1.h"
#include <iostream>

void pointer1() {

    // &a : lấy địa chỉ của a.
    // *&a  <=> a : lấy giá trị tại địa chỉ a.

    int a = 10;
    int *p = &a;
    std::cout << "Gia tri cua bien a:  " << a << std::endl;
    std::cout << "Dia chi cua bien a: "  << &a << std::endl;
    std::cout << "Gia tri cua bien p:  " << p << std::endl;
    std::cout << "Dia chi cua bien p:  " << &p << std::endl;
    std::cout << "Gia tri tai dia chi con tro p tro toi: " << *p << std::endl;
    std::cout << "Gia tri tai dia chi cua a: " << *&a << std::endl;

    std::cout << "Thay doi con tro: " << std::endl;
    *p +=5 ;
    std::cout << "Gia tri cua bien a:  " << a << std::endl;
    std::cout << "Gia tri tai dia chi con tro p tro toi: " << *p << std::endl;

}

