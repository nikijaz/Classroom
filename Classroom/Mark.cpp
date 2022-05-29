#include "Mark.h"

Mark::Mark(string lesson, int turn, int mark) {
	this->lesson = lesson;
	this->turn = turn;
	this->mark = mark;
}

string Mark::getLesson() { return lesson; }
void Mark::setLesson(string lesson) { this->lesson = lesson; }

int Mark::getTurn() { return turn; }
void Mark::setTurn(int turn) {
	if (turn >= MIN_MARK && turn <= MAX_MARK)
		this->turn = turn;
}

int Mark::getMark() { return mark; }
void Mark::setMark(int mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK)
		this->mark = mark;
}