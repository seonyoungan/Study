#include <stdio.h>
#include <stdlib.h>

//���Ḯ��Ʈ ��� ����ü
typedef struct node { 
	struct node* next; //���� ��� �ּ� ���� ������
	int data; // �����͸� ������ ���
} node;

int main_linkedList_01(void) {
	struct node* head = malloc(sizeof(node));

	struct node* node1 = malloc(sizeof(node));
	head ->next = node1;
	node1->data = 10;

	struct node* node2 = malloc(sizeof(node));
	node1->next = node2;
	node2->data = 20;

	node2->next = NULL; //����������� next����̹Ƿ� NULL������

	struct node* curr = head->next ; //���Ḯ��Ʈ�� ��ȸ�� ������ ����
	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	free(node2);
	free(node1);
	free(head);
	return 0;
}
