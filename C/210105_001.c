#include<stdio.h>
#include<limits.h>
#define num 5
int main(void) {

	//1. 최대값, 최소값 구하기
	int i, max, min, index1, index2;
	int array[num];
	max = 0; //작은 숫자로 초기화
	min = INT_MAX; // 약 20억개의 숫자, min이 가질 수 있는 최대 크기
	index1 = 0;
	index2 = 0;
	printf("5개의 수를 입력 : ");
	for (i = 0; i < num; i++)
	{
		scanf_s("%d", &array[i]);
		//최대값 구하기
		if (max < array[i]){
			max = array[i];
			index1 = i; // index1에 최대값이 들어 있는 배열 위치 저장
		}
		//최소값 구하기
		if (min > array[i]){
			min = array[i];
			index2 = i; // index2에 최소값이 들어 있는 배열 위치 저장
		}
	
	}
	printf("최대값 : %d입니다. %d번에 있습니다.\n", max, index1 + 1);
	printf("최소값 : %d입니다. %d번에 있습니다.\n", min, index2 + 1);

	// 2. 5개의 정수 중 짝수 최대값, 홀수 최대값 구하는 프로그램
	int  array2[num];
	int j, oddMax, evenMax;
	oddMax = 0;
	evenMax = 0;

	printf("5개의 수를 입력 : ");
	for (j = 0; j < num; j++) {
		scanf_s("%d", &array2[j]);

		if (array2[j] % 2 == 0) {
			if (evenMax < array2[j]) {
				evenMax = array2[j];
			}
		}
		else {
			if (oddMax < array2[j]) {
				oddMax = array2[j];
			}
		}
	}
	printf("%d %d", evenMax, oddMax);
	return 0;
}
