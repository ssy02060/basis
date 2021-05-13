#include <stdio.h>

int qData[1000000];
int front = -1;
int rear = -1;

void enQueue(int d) {
	qData[rear++] = d;
}

int deQueue() {
	return qData[front++];
}

int qPeek() {
	return qData[front];
}

int isEmpty() {
	return rear==front;
}

int size() {
	return rear-front;
}

int main() {
	enQueue(3);
	enQueue(7);
	enQueue(9);
	printf("%d\n", deQueue());		//3
	enQueue(12);
	printf("%d\n", deQueue());		//7
	printf("%d\n", deQueue());		//9
	enQueue(5);
	enQueue(6);
	printf("%d\n", deQueue());		//12
	printf("%d\n", deQueue());		//5
	printf("%d\n", deQueue());		//6

	return 0;
}

