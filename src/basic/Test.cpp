#include <iostream>
#include "printOddNumbers.h"
#include "typeConversion.h"

using namespace std;

int main() {
    int n;

    cout << "Nhap n: " << endl;
    cin >> n;

    // In các số lẻ
    printOddNumbers(n);

    // Tạo đối tượng của typeConversion và gọi ex
    typeConversion obj;
    obj.ex(n);

    return 0;
}
