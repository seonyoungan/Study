#include <stdio.h>

int main(void) {
	/*
	//continue, break
	for (int i = 1; i < 30; i++) {
		if (i >= 6 && i <10) {
			if (i >= 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d ���л��� ������ǥ�� �غ��ϼ���\n", i);
		}

	}
	
	//random
	srand(time(NULL)); //�����ʱ�ȭ ���ʿ�
	int num = rand() % 3; // � �� (0, 1, 2)
	if (num == 0) {
		printf("����");
	}
	else if (num == 1) {
		printf("����");
	}
	else {
		printf("��");
	}
	printf("\n������: %d", num);
	

	//switch case
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0: printf("����\n");
		break;
	case 1: printf("����\n");
		break;
	case 2: printf("��\n");
		break;
	default: printf("����\n");
	}
	*/

	//up&down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~ 100���� ����
	printf("%d\n\n", num);

	int answer = 0; //����
	int chance = 5; //��ȸ
	while (1) {
		printf("������ȸ %d��", chance);
		printf("���ڸ� ���纸����.(1-100) :");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("down\n");
		}
		else if (answer < num) {
			printf("up\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�.\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��߽��ϴ�.\n");
		}
		if (chance == 0) {
			printf("��� ��ȸ�� �����Ǿ����ϴ�.\n");
			break;
		}
		chance-- ;
	}

	return 0;
}