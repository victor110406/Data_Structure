#include<iostream>
using namespace std;
//���� ������ �ִ� ��� ������ ���� �˰���

int main() {
	int count[5] = {};
	int array[30] = { 1,3,2,5,3,4,3,2,1,4,
					2,1,4,5,4,3,3,1,4,3,
					2,5,4,3,1,3,2,4,5,4 };
	for (int i = 0; i < 30; i++) {
		count[array[i]-1]++;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++) {
				cout << i + 1 << " ";
			}
		}
	}
	return 0;
}