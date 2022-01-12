#include <stdio.h>

int main(void) {

	//2차원 배열 이용한 구구단 출력
	int i, j;
	int gugu[9][9]; // 데이터할당 최적화

	for (i = 1; i <=8; i++) { // gugu[i][0]은 1~8
		printf("[%d단]\n", i+1); // printf는 2~9단으로 출력
		for (j = 0; j <= 8; j++) { 
			gugu[i][j] = (i+1) * (j+1);
			printf("%d * %d = %d\n", i+1, j+1, gugu[i][j]);
		}
		printf("----------\n");
	}


	//학생점수 총합 구하는 프로그램

	int score[5][2]; // 5 = 학생수, 2 = 수학, 영어 점수
	int total[2] = { 0, }; // 과목 점수 구분을 위한 합계 배열
	int k;

	for (k = 0; k < 5; k++) {
		printf("%d번 학생의 수학, 영어 점수 : ", k +1);
		scanf_s("%d %d", &score[k][0], &score[k][1]);
	}

	for (k = 0; k < 5; k++) {
		total[0] += score[k][0]; // 학생 5명의 수학 점수 합계
		total[1] += score[k][1]; // 학생 5명의 영어 점수 합계
	}
	printf("\n\n");
	printf("수학 점수 총합 : %d\n", total[0]);
	printf("영어 점수 총합 : %d\n", total[1]);
	return 0;
}
