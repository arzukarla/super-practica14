#include "pch.h"
#include "Student.h"


Student::Student()
{
	char newGrade = ' ';
}

Student::Student(string name, char grade, int group) {
	newName = name;
   char newGrade = grade;
	newGroup = group;
}
Student::~Student() 
{

}
string Student::getName()const {
	return newName;
}
char Student::getGrade()const {
	return NewGrade;

}
int Student::getGroup()const {
	return newGroup;
}
void Student::setName(string name) {
	newName = name;
}
void Student::setGrade(char grade) {
	NewGrade = grade;
}
void Student::setGroup(int group) {
	newGroup = group; 
}