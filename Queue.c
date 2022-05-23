#include<stdio.h> 
#include<stdlib.h> 
#define Q_SIZE 4

typedef struct { 
    char queue[Q_SIZE];
    int front;
    int rear;
} QueueType;

// 공백 큐를 생성하는 연산 
QueueType* createQueue()
{
    QueueType* Q;
    Q = (QueueType*)malloc(sizeof(QueueType));
    Q->front = -1;
    Q->rear = -1;
    return Q;
}

//큐가 공백인지 확인하는 연산 
int isEmpty(QueueType* Q)
{
    if (Q->front == Q->rear) {
        printf("Queue is empty!\n");
        return 1;
    }
    else { 
        return 0; 
    }
}

//큐가 포화 상태인지 확인하는 연산 
int isFull(QueueType* Q)
{
    if (Q->rear == Q_SIZE - 1) {
        printf("Queue is full! \n");
        return 1;
    }
    else {
        return 0;
    }
}

// 큐의 rear에 원소를 삽입하는 연산 
void enQueue(QueueType* Q, char item)
{
    if (isFull(Q)) { 
        exit(1); 
    }
    else {
        Q->rear++;
        Q->queue[Q->rear] = item;
    }
}

//큐의 front에서 원소를 삭제하고 반환하는 연산 
char deQueue(QueueType* Q)
{
    if (isEmpty(Q)) {
        exit(1); 
    }
    else {
        Q->front++;
        return Q->queue[Q->front];
    }
}

//큐의 가장 앞에 잇는 원소를 검색하여 반환하는 연산 
char peek(QueueType* Q)
{
    if (isEmpty(Q)) { 
        exit(1);
    }
    else { 
        return Q->queue[Q->front + 1];
    }
}

//큐의 내용을 출력하는 연산 
void printQ(QueueType* Q)
{
    int i;
    printf(" Queue : [");
    for (i = Q->front + 1; i <= Q->rear; i++) {
        printf("%3c", Q->queue[i]);
    }
    printf(" ] \n");
}

int main()
{
    QueueType* Q1 = createQueue();
    printf("삽입 A>>"); enQueue(Q1, 'A'); printQ(Q1);
    printf("삽입 B>>"); enQueue(Q1, 'B'); printQ(Q1);
    printf("삽입 C>>"); enQueue(Q1, 'C'); printQ(Q1);
   
    return 0;
}
