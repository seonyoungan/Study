#include <stdio.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void succes();
void fail();

int main_functionProject(void) {
	//문이 5개가 있고 각문마다 점점 어려운 수식퀴즈가 출제됨 (랜덤)
	//맞추면 통과, 틀리면 실패

	srand(time(NULL));
	int count = 0; // 맞춘문제갯수
	for (int i = 1; i <= 5; i++) {
		//x * y = ?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2); // printf("%d * %d의 값은 얼마인가요?".num1, num2);
		
		int answer = - 1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("프로그램 종료합니다.");
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
	printf("\n\n맞춘 비밀번호 : %d/5", count);

	return 0;
}

int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n\n##### %d 번째 비밀번호 #####\n", level);
	printf("\n\t %d * %d = \n\n", num1, num2);
	printf("##################################\n");
	printf("\n비밀번호를 입력하세요. (종료 : 1)>> ");
}


void succes() {
	printf("정답입니다.\n");
}
void fail() {
	printf("틀렸습니다.\n");
}