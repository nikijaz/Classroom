#pragma once

#include <iostream>
using std::string;

class Mark {
private:
	string lesson;
	int turn;
	int mark;

	static const int MIN_TURN = 1;
	static const int MAX_TURN = 4;
	static const int MIN_MARK = 1;
	static const int MAX_MARK = 10;
public:
	Mark(string lesson, int turn, int mark);
	
	string getLesson();
	void setLesson(string lesson);
	
	int getTurn();
	void setTurn(int turn);
	
	int getMark();
	void setMark(int mark);
	
};