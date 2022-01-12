
#include<stdio.h>


//1. 반복 함수
// 반복 함수를 이용해서 숫자 피라미드를 출력(반복함수는 for문과 while문으로 구성됨)
int f1(int a) {
	int i, j;
	for (i = 0; i < a; i++) // a번 반복
	{ 
		for (j = 0; j <= i; j++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
}


//2. 재귀 함수
// 특정 문자열을 재귀함수 반복 출력
// 본인 함수 안에 본인이 포함되어 계속 반복

void f2(int cnt) {
	if (cnt == 0){
		return 0;
	}
	else {
		printf("문자열을 출력합니다.\n");
		f2(cnt - 1);
	}
}

//3. 재귀함수 활용(조합 구현)
int nCr(int n, int r) {
	if (r == 0 || r == n) {
		return 1;
	}
	else {
		return nCr(n - 1, r-1) + nCr(n - 1, r);
	}
}

int main(void) {
	int a;
	printf("몇번 반복할까요? : ");
	scanf_s("%d", &a);
	f1(a);

	int b;
	printf("\n");
	printf("문자열을 몇개 출력할까요? : ");
	scanf_s("%d", &b);
	f2(b);

	printf("서로 다른 n개의 물건, 순서 생각하지 않고 r개 선택 : ");
	int n, r;
	scanf_s("%d %d", &n, &r);
	printf("%d", nCr(n, r));
	return 0;
}
