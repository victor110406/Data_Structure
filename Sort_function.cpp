#include<iostream>
#include<algorithm>
using namespace std;

class Student {
private:
public:
	string name;
	int score;
	Student(string name, int score) { //������
		this->name = name;
		this->score = score;
	}
	bool operator < (Student& student) { //���� ����
		return this->score < student.score;
	}
};

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int a[10] = { 7,8,4,1,3,2,6,9,10,15 };
	sort(a, a + 10); //��������
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}

	sort(a, a + 10, compare); //��������
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}

	Student students[] = {
		Student("ȫ����",100),
		Student("������",70),
		Student("���輺",80),
		Student("������",40)
	};
	sort(students, students + 4);
	for (int i = 0; i < 4; i++) {
		cout << students[i].name << endl;
	}

	return 0;
}