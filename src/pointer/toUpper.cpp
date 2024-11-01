//
// Created by ADMIN on 10/4/2024.
//

#include "../../include/pointer/toUpper.h"

void to_upper(string *s) {
    for (int i = 0; i < s->length(); i++) {
        s->at(i) = toupper(s->at(i));
    }
}


void upper(string *s) {
    cout << "Enter string: " << endl;
    cin >> *s;
    to_upper(s);
    cout << *s;
}
