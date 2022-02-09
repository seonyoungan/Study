#include <stdio.h>

int main(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	printf("a 주소: %d 암호: %d\n",&a, a);
	printf("b 주소: %d 암호: %d\n", &b, b);
	printf("c 주소: %d 암호: %d\n", &c, c);


	int *pointer; //포인터변수
	pointer = &a;
	printf("a의 주소값은 pointer변수에 있다..이거라고요 : %d\n", pointer);
	printf("a의 값 별입력하고 변수쳐보세요 a값나온다.: %d\n\n", *pointer);

	pointer = &b;
	printf("b의 주소값은 pointer변수에 있다..이거라고요 : %d\n", pointer);
	printf("b의 값 별입력하고 변수쳐보세요 b값나온다.: %d\n\n", *pointer);

	pointer = &c;
	printf("c의 주소값은 pointer변수에 있다..이거라고요 : %d\n", pointer);
	printf("c의 값 별입력하고 변수쳐보세요 c값나온다.: %d\n\n", *pointer);
	
	//각 암호에 3 곱해부쟝
	pointer = &a;
	*pointer = *pointer * 3; //여기서 값을 바꿨으니까 변수 a값: 1, *pointer값: 3
	printf("a 주소: %d 암호: %d\n", &a, a);
	printf("a의 주소값은 pointer변수에 있다..이거라고요 : %d\n", pointer);

	printf("a의 값 별입력하고 변수쳐보세요 a값나온다.: %d\n\n", *pointer);

	//pointer *3 했던 값에서 -2하세요
	int* spy = &a;
	*spy = *spy - 1;
	printf("a주소 : %d\n", spy);
	printf("a값 : %d\n\n", *spy);

	*spy = *spy - 1;
	printf("b주소 : %d\n", spy);
	printf("b값 : %d\n\n", *spy);

	*spy = *spy - 1;
	printf("c주소 : %d\n", spy);
	printf("c값 : %d\n\n", *spy);

	//원래 값이 바뀌었을까..?
	printf("a 주소: %d 암호: %d\n", &a, a);
	printf("b 주소: %d 암호: %d\n", &b, b);
	printf("c 주소: %d 암호: %d\n\n", &c, c);

	//변수의 주소값을 가리키는 포인터 자체가 변수의 값을 직접 바꿀 수 있다!

	printf("p주소값:%d\n", &pointer);
	printf("s주소값:%d\n", &spy);

	return 0;
}