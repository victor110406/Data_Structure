#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

// 데이터를 스택에서 빼는 작업

typedef struct StackType {
	int arr[SIZE]; // int형 데延 100개
	int top;
}StackType;

// 초기화 작업
void init(StackType* s){
	s->top = -1;
}

// 스택이 비어 있는지 판단하는 작업
int is_empty(StackType* s) {
	if (s->top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

// 스택이 꽉 차있는지 판단하는 작업
int is_full(StackType* s) {
	if (s->top == SIZE - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

// 데이터를 스택에서 넣는 작업
void push(StackType* s, int value) {
	if (is_full(s)) {
		printf("Stack is full");
		exit(1);
	}
	s->arr[++(s->top)] = value;
}

// 데이터를 스택에서 빼는 작업
int pop(StackType* s) {
	if (is_empty(s)) {
		printf("Stack is empty");
		exit(1);
	}
	return s->arr[(s->top)--];
}

// 최상위 스택 출력
int peek(StackType* s) {
	if (is_empty(s)) {
		printf("Stack is empty");
		exit(1);
	}
	return s->arr[(s->top)];
}

int main() {

	StackType s;
	init(&s); //stack 초기화

	push(&s, 3);
	push(&s, 2);
	push(&s, 1);
	printf("%d", peek(&s));

	return 0;
}
