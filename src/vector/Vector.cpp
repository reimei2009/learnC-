//
// Created by ADMIN on 10/11/2024.
//

#include "Vector.h"

int main() {
    vector<int> array1 = {2, 0, 0, 9};
    vector<int> array2 = {2, 0, 0, 4};

    cout << array1.size() << endl;

    array1.resize(10);
    cout << "New size: " << array1.size() << endl;

    for (auto const &element : array1) {
        cout << element << " ";
    }
    cout << endl;
    cout << "Stack: " << endl;
    stack();
}

void stack() {
    vector<int> stack;
    cout << "Stack after push: " << endl;
    stack.push_back(4);
    printStack(stack);

    cout << "Stack after push: " << endl;
    stack.push_back(5);
    printStack(stack);

    cout << "Stack after push: " << endl;
    stack.push_back(6);
    printStack(stack);

    cout << "Stack after pop: " << endl;
    stack.pop_back();
    printStack(stack);
}

void printStack (const vector<int> &stack) {
    for (const auto &element : stack) {
        cout << element << " ";
    }
    cout << endl;
}
