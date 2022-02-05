/* C언어 기본 입출력

 1. 0이 아닌 모든 수는 참(0거1참)
 2. 모든 조건문, 반복문에서 왠만해서 무조건 괄호 적용
 3. for문, while문은 얼마든지 중첩 가능
 4. for(;;) while(1)과 동일하게 무한 루프라는 의미로 동작
 5. break;를 이용해 반복문 즉시 빠져나올 수 있음

*/


#include<stdio.h>

int main(void) {
	int choice;
	char button;
	printf("******************************************\n");
	printf("1. 계산기 프로그램\n");
	printf("2. 원하는 갯수의 정수 덧셈 프로그램\n");
	printf("3. 원하는 구구단 출력 프로그램\n");
	printf("******************************************\n");

	while (1){
	printf("▶ 원하는 프로그램을 선택하세요(1,2,3) : ");
	scanf_s("%d", &choice);

	if (choice == 1){
		char o;
		int x, y;
		printf("***1. 계산기 프로그램***\n");
		while (1) // 1 = 참값, break문 이용하지 않으면 무한루프됨
		{
			printf("수식을 입력하세요 : ");
			scanf_s("%d %c %d", &x, &o, 1, &y); // scanf_s는 scanf와 달리 문자나 문자열의 경우 길이를 넣어야 함

			if (o == '+') {
				printf("%d %c %d = %d\n", x, o, y, x + y);
			}

			else if (o == '-') {
				printf("%d %c %d = %d\n", x, o, y, x - y);
			}
			else if (o == '*') {
				printf("%d %c %d = %d\n", x, o, y, x * y);
			}
			else if (o == '/') {
				printf("%d %c %d = %d\n", x, o, y, x / y);
			}
			else if (o == '%') {
				printf("%d %c %d = %d\n", x, o, y, x % y);
			}
			else {
				printf("입력이 잘못되었습니다.\n");
			}
			getchar(); // scanf_s 다중사용시 버퍼를 지워주는 getchar(); 활용

			printf("계산기 프로그램을 종료하시겠습니까?(y/n) : ");

			scanf_s("%c", &o,1);

			if (o == 'n' || o == 'N') {
				continue;
			}
			else if (o == 'y' || o == 'Y') {
				break;
			}
			else {
				printf("입력이 잘못되었습니다.\n");
			}
		}
	}

	else if(choice == 2){
		printf("***2.원하는 갯수의 정수 덧셈 프로그램***\n");
		int num, a, i, sum = 0;
		a = 0;
		printf("정수의 개수를 입력하세요 : ");
		scanf_s("%d", &num);
		for (i = 0; i < num; i++) {
			printf("정수의 값을 입력하세요 : ");
			scanf_s("%d", &a);
			sum += a;
		}
		printf("정수 %d개 입력완료\n", a);
		printf("전체 정수의 값은 %d입니다\n", sum);

		getchar();  // scanf_s 다중사용시 버퍼를 지워주는 getchar(); 활용
		printf("▶ 프로그램을 종료하시겠습니까?(y/n) : ");
		scanf_s("%c", &button, 1);
		if (button == 'n' || button == 'N') {
			continue;
		}
		else if (button == 'y' || button == 'Y') {
			break;
		}
		else {
			printf("입력이 잘못되었습니다.\n");
		}

	}
	else if (choice == 3) {
		printf("***3.원하는 구구단 출력 프로그램***\n");

		int n, m;
		printf("단을 입력하세요 : ");
		scanf_s("%d", &n);

		for (m = 1; m <= 9; m++) {
			printf("%d * %d = %d\n", n, m, n * m);
		}
	}

	else if(choice > 0 || choice < 4) {
		printf("입력이 잘못되었습니다. 프로그램을 다시 실행합니다.\n");
		continue;
	}
		getchar(); // scanf_s 다중사용시 버퍼를 지워주는 getchar(); 활용
		printf("▶ 프로그램을 종료하시겠습니까?(y/n) : ");
		scanf_s("%c", &button, 1);
		if (button == 'n' || button == 'N') {
			continue;
		}
		else if (button == 'y' || button == 'Y') {
			break;
		}
		else {
			printf("입력이 잘못되었습니다.\n");
		}
	}
	return 0;
}
