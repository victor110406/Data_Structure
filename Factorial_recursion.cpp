#include<stdio.h>

int factorial(int n);

int main() {
	int n, result;
	printf("정수를 입력하세요:");
	scanf_s("%d", &n);
	result = factorial(n);
	printf("%d의 팩토리얼 값은 %d입니다", n, result);
	return 0;
}

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}