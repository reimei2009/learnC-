//
// Created by ADMIN on 10/11/2024.
//
#include <printPrimeNumber.h>

bool isPrime(int n) {
    if ( n <= 1) {
        return false;
    }

    for (int i = 2 ; i < sqrt(n); i++) {
        if (n %i == 0 ) {
            return false;
        }
    }
    return true;
}

void printPrime(int &n) {
    while (n!=0) {
        if (isPrime(n % 10) == true) {
            cout << n % 10 << " " ;
        }
        n /= 10;
    }
}

int main() {
    int n;
    do {
        cout << "Enter number: ";
        cin >> n;

        if (n <= 0) {
            cout << "Invalid Input" << endl;
            system("pause");
        }
    } while (n <= 0);

    printPrime(n);

    return 0;
}
