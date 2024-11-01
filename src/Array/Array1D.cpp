//
// Created by ADMIN on 9/30/2024.
//

#include "Array1D.h"
#include <iostream>

using namespace std;

void sum1D(int arr[], int n) {
    int sum = 0 ;
    for (int i = 0 ; i< n ; i++) {
        sum += arr[i];
    }
    cout << "Tong : " << sum ;
}

void max1D(int arr[], int n) {
    int max = arr[0];
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max ;
}

//Tong arr[0] va arr[n-1]
void sum2(int arr[], int n) {
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++) {
        sum = arr[0] + arr[n-1];
    }
    cout << sum ;
}

void sumEvenNumber(int arr[], int n) {
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] %2 == 0) {
            sum += arr[i];
        }
    }
    cout << sum ;
}

void increasing(int arr[] , int n) {
    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1; j < n ; j++ ) {
            if (arr[i] > arr[j]) {
                int temp  = arr[i] ;
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
}
