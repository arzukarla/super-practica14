#pragma once
#include "Student.h" 
#ifndef Student_H
#define student_H
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student();
	Student(string, char, int);
	virtual ~Student();
	string getName()const;
	char getGrade()const;
	int getGroup()const;

	void setName(string);
	void setGrade(char);
	void setGroup(int);

private:
	string newName;
	char NewGrade;
	int newGroup;
};
#endif 
