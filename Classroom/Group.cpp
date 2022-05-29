#include "Group.h"

Group::Group(int number, char letter) {
	this->number = number;
	this->letter = letter;
	students = vector<Student>();
}
Group::Group(int number, char letter, vector<Student> students) {
	this->number = number;
	this->letter = letter;
	this->students = students;
}

int Group::getNumber() { return number; }
void Group::setNumber(int number) {
	if (number >= MIN_NUMBER && number <= MAX_NUMBER)
		this->number = number;
}

char Group::getLetter() { return letter; }
void Group::setLetter(char letter) { this->letter = letter; }

vector<Student> Group::getStudents() { return students; }
void Group::setStudents(vector<Student> students) { this->students = students; }
void Group::addStudent(Student student) { students.push_back(student); }
void Group::removeStudent(int index) { students.erase(students.begin() + index); }

int Group::getSize() { return students.size(); }