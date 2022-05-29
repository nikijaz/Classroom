#pragma once

#include <vector>
using std::vector;
#include "Mark.h"

class Student {
private:
	string name;
	int age;
	char sex;

	vector<Mark> marks;
public:
	Student(string name, int age, char sex);
	Student(string name, int age, char sex, vector<Mark> marks);
	
	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	char getSex();
	void setSex(char sex);

	vector<Mark> getMarks();
	void setMarks(vector<Mark> marks);
	float getAverageMark();
	float getAverageMark(string lesson);
	float getAverageMark(int turn);
	float getAverageMark(string lesson, int turn);
};