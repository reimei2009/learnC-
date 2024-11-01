//
// Created by ADMIN on 10/11/2024.
//

#include "nullPointer.h"
#define  NULL 0;

int main() {
    float a = 5;
    float *ptr = &a; ; // con tro null

    float *ptr2;    // con tro rac
    ptr2 = 0 ; // con tro null

    if(ptr) {
        cout << "ptr value is pointed to by pointer" << endl;
    }
    else {
        cout << "ptr value is null" << endl;
    }
}
