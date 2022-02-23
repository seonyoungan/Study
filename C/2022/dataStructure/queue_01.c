#include <stdio.h>
#define MAX_SIZE 10

//��������
int queue[MAX_SIZE];
int front = -1, rear = -1;

//�Լ�����
int put(int value);
int get();
void printQueueu();

int main(void) {
	//queue : first in first out (FIFO)
	//queue�� ���� : put(�ڷḦ ��(rear)�� ������� ��), get(�ڷḦ ��(front)�� ���� ��)
	printQueueu();
	put(1);
	put(2);
	put(3);
	put(4);
	put(5);
	put(6);
	put(7);
	put(8);
	put(9);
	put(10);
	printQueueu();
	get();
	get();
	get();
	printQueueu(); //4~10..?
	return 0;
}

int put(int value) { //rear ����
	if (rear > MAX_SIZE - 1) {
		if (!(rear - front)) {
			return -1;
		}
		//�迭�� �ű�� �۾� (���ؾȵ�,,)
		memcpy(&queue[0], &queue[front], rear - front + 1);
		rear = rear - front;
		front = 0;
	}
	queue[++rear] = value;
}


int get() {
	if (front <= 0) {
		printf("Underflow\n");
		return -1;
	}
	else{
		front += 1;
		return queue[front];
	}
	
}

void printQueueu() {
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d ", queue[i]);
	}
	printf("\n");
}