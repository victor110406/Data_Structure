#include<stdio.h>

int factorial(int n);

int main() {
	int n, result;
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &n);
	result = factorial(n);
	printf("%d�� ���丮�� ���� %d�Դϴ�", n, result);
	return 0;
}

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}