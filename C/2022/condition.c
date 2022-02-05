#include <stdio.h>

int main(void) {
	/*
	//continue, break
	for (int i = 1; i < 30; i++) {
		if (i >= 6 && i <10) {
			if (i >= 7) {
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번학생은 조별발표를 준비하세요\n", i);
		}

	}
	
	//random
	srand(time(NULL)); //난수초기화 꼭필요
	int num = rand() % 3; // 어떤 수 (0, 1, 2)
	if (num == 0) {
		printf("가위");
	}
	else if (num == 1) {
		printf("바위");
	}
	else {
		printf("보");
	}
	printf("\n랜덤수: %d", num);
	

	//switch case
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0: printf("가위\n");
		break;
	case 1: printf("바위\n");
		break;
	case 2: printf("보\n");
		break;
	default: printf("몰랗\n");
	}
	*/

	//up&down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~ 100까지 숫자
	printf("%d\n\n", num);

	int answer = 0; //정답
	int chance = 5; //기회
	while (1) {
		printf("남은기회 %d번", chance);
		printf("숫자를 맞춰보세요.(1-100) :");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("down\n");
		}
		else if (answer < num) {
			printf("up\n");
		}
		else if (answer == num) {
			printf("정답입니다.\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.\n");
		}
		if (chance == 0) {
			printf("모든 기회가 소진되었습니다.\n");
			break;
		}
		chance-- ;
	}

	return 0;
}