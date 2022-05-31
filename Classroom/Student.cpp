#include "Student.h"

Student::Student(string name, int age, char sex) {
	this->name = name;
	this->age = age;
	this->sex = sex;
	marks = vector<Mark>();
}
Student::Student(string name, int age, char sex, vector<Mark> marks) {
	this->name = name;
	this->age = age;
	this->sex = sex;
	this->marks = marks;
}
Student::~Student() { marks.clear(); }

string Student::getName() { return name; }
void Student::setName(string name) { this->name = name; }

int Student::getAge() { return age; }
void Student::setAge(int age) { this->age = age; }

char Student::getSex() { return sex; }
void Student::setSex(char sex) { this->sex = sex; }

vector<Mark> Student::getMarks() { return marks; }
void Student::setMarks(vector<Mark> marks) { this->marks = marks; }
float Student::getAverageMark() {
	float averageMark = 0;
	for (int i = 0; i < marks.size(); i++)
		averageMark += marks[i].getMark();
	return (marks.size() > 0) ? (averageMark / marks.size()) : 0;
}
float Student::getAverageMark(string lesson) {
	float markSum = 0;
	int markCount = 0;
	for (int i = 0; i < marks.size(); i++) {
		if (marks[i].getLesson() == lesson) {
			markSum += marks[i].getMark();
			markCount++;
		}
	}
	return (markCount > 0) ? (markSum / markCount) : 0;
}
float Student::getAverageMark(int turn) {
	float markSum = 0;
	int markCount = 0;
	for (int i = 0; i < marks.size(); i++) {
		if (marks[i].getTurn() == turn) {
			markSum += marks[i].getMark();
			markCount++;
		}
	}
	return (markCount > 0) ? (markSum / markCount) : 0;
}
float Student::getAverageMark(string lesson, int turn) {
	float markSum = 0;
	int markCount = 0;
	for (int i = 0; i < marks.size(); i++) {
		if (marks[i].getLesson() == lesson && marks[i].getTurn() == turn) {
			markSum += marks[i].getMark();
			markCount++;
		}
	}
	return (markCount > 0) ? (markSum / markCount) : 0;
}