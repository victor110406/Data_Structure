#include<iostream>
using namespace std;

//������� 2�� �̻� ������ �������� ���
//�ִ������� ����� �߿� ���� ū �����
int gcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

//������� 2�� �̻��� ������ �������� ���
//�ּҰ������ ����� ���� ���� ���� �����
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {


	return 0;
}