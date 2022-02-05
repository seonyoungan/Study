#include <stdio.h>

int main_loop(void) {
	/*
	//반복문: for
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int gob = i * j;
			printf("%d * %d = %d\n", i, j, gob);
		}
		printf("\n");
	}

	//반복문: while
	int a = 1;
	while (a <= 10) {
		printf("%d: hello world\n", a);
		a++;
	}

	int b = 0;
	int c = 1;
	printf("계산할 단: ");
	scanf_s("%d", &b);
	while (b <= 9) {
		while (c <= 9) {
			int gob2 = b * c;
			printf("%d * %d = %d\n", b, c, gob2);
			c++;
		}
		b++;
		printf("\n");
	}

	//반복문: do while
	int d = 1;

	do {
		printf("%d: 안녕\n", d);
		d++;
	} while (d <=3);
	

	//별찍기
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	//거꾸로별찍기
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	int floor;
	printf("몇층으로쌓을까요?: ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
	*/
}