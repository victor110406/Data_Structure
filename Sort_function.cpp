#include<iostream>
#include<algorithm>
using namespace std;

class Student {
private:
public:
	string name;
	int score;
	Student(string name, int score) { //생성자
		this->name = name;
		this->score = score;
	}
	bool operator < (Student& student) { //정렬 기준
		return this->score < student.score;
	}
};

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int a[10] = { 7,8,4,1,3,2,6,9,10,15 };
	sort(a, a + 10); //오름차순
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}

	sort(a, a + 10, compare); //내림차순
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}

	Student students[] = {
		Student("홍원산",100),
		Student("전승윤",70),
		Student("조계성",80),
		Student("국승재",40)
	};
	sort(students, students + 4);
	for (int i = 0; i < 4; i++) {
		cout << students[i].name << endl;
	}

	return 0;
}