#include "Group.h"
using std::cout;

int main() {
	Group group = Group(9, 'a');
	group.addStudent(Student("Nikita", 15, 'm'));
	group.addStudent(Student("Alex", 18, 'm'));

	cout << group.getSize();
	return 0;
}