#include <stdio.h>
#include <stdlib.h>

//연결리스트 노드 구조체
typedef struct node { 
	struct node* next; //다음 노드 주소 저장 포인터
	int data; // 데이터를 저장할 멤버
} node;

int main_linkedList_01(void) {
	struct node* head = malloc(sizeof(node));

	struct node* node1 = malloc(sizeof(node));
	head ->next = node1;
	node1->data = 10;

	struct node* node2 = malloc(sizeof(node));
	node1->next = node2;
	node2->data = 20;

	node2->next = NULL; //마지막노드의 next멤버이므로 NULL저장함

	struct node* curr = head->next ; //연결리스트의 순회용 포인터 생성
	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	free(node2);
	free(node1);
	free(head);
	return 0;
}
