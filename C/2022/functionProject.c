#include <stdio.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void succes();
void fail();

int main_functionProject(void) {
	//���� 5���� �ְ� �������� ���� ����� ������� ������ (����)
	//���߸� ���, Ʋ���� ����

	srand(time(NULL));
	int count = 0; // ���Ṯ������
	for (int i = 1; i <= 5; i++) {
		//x * y = ?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2); // printf("%d * %d�� ���� ���ΰ���?".num1, num2);
		
		int answer = - 1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("���α׷� �����մϴ�.");
			exit(0);
		}
		else if (answer == num1 * num2) {
			succes();
			count++;
		}
		else {
			fail();
		}
	}
	printf("\n\n���� ��й�ȣ : %d/5", count);

	return 0;
}

int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n\n##### %d ��° ��й�ȣ #####\n", level);
	printf("\n\t %d * %d = \n\n", num1, num2);
	printf("##################################\n");
	printf("\n��й�ȣ�� �Է��ϼ���. (���� : 1)>> ");
}


void succes() {
	printf("�����Դϴ�.\n");
}
void fail() {
	printf("Ʋ�Ƚ��ϴ�.\n");
}