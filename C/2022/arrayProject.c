#include <stdio.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	printf("\n\n == 아빠는 대머리 게임 == \n\n");
	int answer; //사용자 입력값
	int treatment = rand() % 4;

	int cntShowBottle = 0; // 이번 게임에서 보여줄 병 갯수
	int prevCntShowBottle = 0; // 앞 게임에서 보여준 병갯수
	// 서로 보여주는 병 갯수를 다르게 하여 정답률을 향상시킴

	//3번의 기회 (3번의 발모제 투여 시도)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0,0,0,0 }; //4개병
		do {
			cntShowBottle = rand() % 2 + 2; //보여줄 병 갯수 : 0~1 -> 2,3
		} while (cntShowBottle == prevCntShowBottle);

		int isInclude = 0; //발모제포함 1 / 미포함0
		printf("%d번째 시도\n\n", i);

		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4;

			//아직 선택되지 않은 병이면, 선택처리
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isInclude == 1;
				}
			}
			//이미 선택된 병이면 중복으로 다시선택
			else {
				j--; 
			}
		}

		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d", k + 1);
			}
			printf("물약을 머리에 바릅니다 \n\n");

			if (isInclude == 1) {
				printf(" >> 성공! 머리가 났어요!\n");
			}
			else {
				printf(" >> 실패! 머리가 나지 않았어요..\n");
			}
		}
		printf("\n... 계속하려면 아무키나 누르세요...");
		getchar();
	}
	printf("\n\n발모제는 몇번일까요?");
	scanf_s("%d", &answer);

	if (answer == treatment+1) {
		printf("\n >> 정답입니다!\n");
	}
	else {
		printf("\n >> 틀렸어요! 정답은 %d입니다.", treatment+1);
	}
	return 0;
}



	