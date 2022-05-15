#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

// �����͸� ���ÿ��� ���� �۾�

typedef struct StackType {
	int arr[SIZE]; // int�� ������ 100��
	int top;
}StackType;

// �ʱ�ȭ �۾�
void init(StackType* s){
	s->top = -1;
}

// ������ ��� �ִ��� �Ǵ��ϴ� �۾�
int is_empty(StackType* s) {
	if (s->top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

// ������ �� ���ִ��� �Ǵ��ϴ� �۾�
int is_full(StackType* s) {
	if (s->top == SIZE - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

// �����͸� ���ÿ��� �ִ� �۾�
void push(StackType* s, int value) {
	if (is_full(s)) {
		printf("Stack is full");
		exit(1);
	}
	s->arr[++(s->top)] = value;
}

// �����͸� ���ÿ��� ���� �۾�
int pop(StackType* s) {
	if (is_empty(s)) {
		printf("Stack is empty");
		exit(1);
	}
	return s->arr[(s->top)--];
}

// �ֻ��� ���� ���
int peek(StackType* s) {
	if (is_empty(s)) {
		printf("Stack is empty");
		exit(1);
	}
	return s->arr[(s->top)];
}

int main() {

	StackType s;
	init(&s); //stack �ʱ�ȭ

	push(&s, 3);
	push(&s, 2);
	push(&s, 1);
	printf("%d", peek(&s));

	return 0;
}