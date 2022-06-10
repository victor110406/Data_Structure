#include<iostream>
using namespace std;

//공약수는 2개 이상 정수의 공통적인 약수
//최대공약수는 공약수 중에 가장 큰 공약수
int gcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

//공배수는 2개 이상의 정수의 공통적인 배수
//최소공배수는 공배수 중의 가장 작은 공배수
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {


	return 0;
}