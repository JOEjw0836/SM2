#pragma once 

#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "Person.h"
class Student : public Person {
public:
	Student(string name);
};

Student::Student(string name) : Person(name) {
	cout << "Student »ý¼ºÀÚ" << endl;
}

#endif
