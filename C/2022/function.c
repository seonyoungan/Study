#include <stdio.h>

//선언
int p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int main_function(void) {
	//반환값이 없는 함수
	function_without_return();

	//반환값이 있는 함수
	int ret = function_with_return();
	p(ret);

	//파라미터(전달값)이 없는 함수
	function_without_params();
	
	//파라미터(전달값)이 있는 함수
	function_with_params(1, 2, 3);
	
	return 0;
}


//함수생성
int p(int num) {
	printf("num의 값: %d \n", num);
	return num;
}

void function_without_return() {
	printf("반환값 없는 함수\n");
}

int function_with_return() {
	printf("반환값이 있는 함수\n");
	return 10;
}

void function_without_params() {
	printf("전달값이 없는 함수\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("전달값이 있는 함수이며, 전달받은 값은 %d %d %d입니다.\n", num1, num2, num3);
}
