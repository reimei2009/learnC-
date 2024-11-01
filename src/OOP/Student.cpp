//
// Created by ADMIN on 10/7/2024.
//

#include "Student.h"

void Student::input() {
    cout << "Enter id: " << endl;
    getline(cin, id);
    fflush(stdin);

    cout << "Enter name: " << endl;
    getline(cin, name);
    fflush(stdin);

    cout << "Enter grade: " << endl;
    cin >> grade;
    fflush(stdin);
}

void Student::print() {
    cout << id << " " << name << " " << grade << endl;
}

void Class::findStudent(string id) const {
    for (int i = 0 ; i < spt ; i++) {
        if(student[i].getId() == id) {
            student[i].print();
            return;
        }
    }
}


void Class::input() const {
    for (int i ; i < spt ; i++) {
        cout << "Student number: " << endl;
        student[i].Student::input();
    }
}

void Class::print() const {
    for (int i ; i < spt ; i++) {
        student[i].Student::print();
    }
}


int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cin.ignore();  // Xóa bộ đệm đầu vào trước khi nhập dữ liệu
    Class studentClass(numStudents);
    studentClass.input();
    studentClass.print();

    string searchId;
    cout << "Enter ID to find: ";
    getline(cin, searchId);
    studentClass.findStudent(searchId);

    return 0;
}


