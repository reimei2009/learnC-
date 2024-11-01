//
// Created by ADMIN on 10/7/2024.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        string id;
        double grade;
    public:
        Student(string name = " ", string id = " ", double grade = 0.0) : name(name), id(id), grade(grade){} ;
        void input();
        void print();
        string getId() const {
            return id;
        }

};

class Class {
    private:
        const int spt;
        Student *student;
    public:
        Class(int t) : spt(t) {
            student = new Student[spt];
        }

        void input() const;
        void print() const;
        void findStudent(string id) const;

};

#endif //STUDENT_H
