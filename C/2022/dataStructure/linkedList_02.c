#include <stdio.h>
#include <stdlib.h>

//���Ḯ��Ʈ ��� ����ü

typedef struct linkedList {
	struct node* cur;
	struct node* head;
	struct node* tail;
}linkedList;

typedef struct node {
	int data;
	struct node* next;

}node;

void createNode(linkedList* a, int tdata);
void deleteNode(linkedList* a);
void printNodes(linkedList* a);

int main_(void) {
	linkedList *a = (linkedList*)malloc(sizeof(linkedList));//malloc�� return type = void

	//���� L�� �ʱ�ȭ
	a->cur = NULL;
	a->head = NULL;
	a->tail = NULL;

	return 0;
}

void createNode(linkedList* a, int tdata) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = tdata;
	newNode->next = NULL;
	if (a->head == NULL && a->tail == NULL) {
		a->head = a->tail = newNode;
	}
	else {
		a->tail->next = newNode;
		a->tail = newNode;
	}

	createNode(a, 1);
	createNode(a, 2);
	createNode(a, 3);
	createNode(a, 4);
	createNode(a, 5);
	deleteNode(a);
	createNode(a, 6);
	createNode(a, 7);
	deleteNode(a);
	deleteNode(a);
	printf(a);
	return 0;
}

void deleteNode(linkedList* a) {
	node* p = a->head; //������ ����,,?
	while (p != NULL) {
		p->next;
	}
	p->next = p->next->next;
	a->tail = p;
}

void printNodes(linkedList* a) {
	node* p = a->head;
	putchar('[');
	while (p != NULL) {
		printf("%d", p->data);
		p = p->next;
	}
	putchar(']\n');
}