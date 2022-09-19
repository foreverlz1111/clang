#include <iostream>
using namespace std;
class Student {
public:
	friend void comp(Student student);
public:
private:
	int a_score;
public:
	int getAScore() const {
		return a_score;
	}

	void setAScore(int aScore) {
		a_score = aScore;
	}

	int getBScore() const {
		return b_score;
	}

	void setBScore(int bScore) {
		b_score = bScore;
	}

	const string& getAName() const {
		return a_name;
	}

	void setAName(const string& aName) {
		a_name = aName;
	}

	const string& getBName() const {
		return b_name;
	}

	void setBName(const string& bName) {
		b_name = bName;
	}

private:
	int b_score;
	string a_name;
	string b_name;
};
void comp(Student student) {
	if (student.a_score > student.b_score)cout << ">";
	else if (student.a_score == student.b_score)cout << "==";
	else if (student.a_score < student.b_score)cout << "<";
}
int main() {
	Student student;
	int a_score;
	int b_score;
	string a_name;
	string b_name;
	cin >> a_name >> a_score >> b_name >> b_score;
	student.setAScore(a_score);
	student.setBScore(b_score);
	comp(student);
	return 0;
}