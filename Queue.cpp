#include<stdio.h> 
#include<stdlib.h> 
#define Q_SIZE 4

typedef struct { 
    char queue[Q_SIZE];
    int front;
    int rear;
} QueueType;

// ���� ť�� �����ϴ� ���� 
QueueType* createQueue()
{
    QueueType* Q;
    Q = (QueueType*)malloc(sizeof(QueueType));
    Q->front = -1;
    Q->rear = -1;
    return Q;
}

//ť�� �������� Ȯ���ϴ� ���� 
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

//ť�� ��ȭ �������� Ȯ���ϴ� ���� 
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

// ť�� rear�� ���Ҹ� �����ϴ� ���� 
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

//ť�� front���� ���Ҹ� �����ϰ� ��ȯ�ϴ� ���� 
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

//ť�� ���� �տ� �մ� ���Ҹ� �˻��Ͽ� ��ȯ�ϴ� ���� 
char peek(QueueType* Q)
{
    if (isEmpty(Q)) { 
        exit(1);
    }
    else { 
        return Q->queue[Q->front + 1];
    }
}

//ť�� ������ ����ϴ� ���� 
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
    printf("���� A>>"); enQueue(Q1, 'A'); printQ(Q1);
    printf("���� B>>"); enQueue(Q1, 'B'); printQ(Q1);
    printf("���� C>>"); enQueue(Q1, 'C'); printQ(Q1);
   
    return 0;
}
