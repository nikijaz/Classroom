#pragma once

#include "Student.h"

class Group {
private:
	int number;
	char letter;
	vector<Student> students;

	static const int MIN_NUMBER = 1;
	static const int MAX_NUMBER = 11;
public:
	Group(int number, char letter);
	Group(int number, char letter, vector<Student> students);

	int getNumber();
	void setNumber(int number);

	char getLetter();
	void setLetter(char letter);

	vector<Student> getStudents();
	void setStudents(vector<Student> students);
	void addStudent(Student student);
	void removeStudent(int index);

	int getSize();
};