//
// Created by ADMIN on 10/11/2024.
//

#include "primeNumber.h"

bool isPrime(int n) {
    if ( n <= 1) {
        return false;
    }

    for (int i = 2 ; i < sqrt(n); i++) {
        if (n %i == 0 ) {
            break;
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number: ");
    cin >> n ;

    cout << "Check primeNumber: " << endl;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }
}