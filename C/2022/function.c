#include <stdio.h>

//����
int p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int main_function(void) {
	//��ȯ���� ���� �Լ�
	function_without_return();

	//��ȯ���� �ִ� �Լ�
	int ret = function_with_return();
	p(ret);

	//�Ķ����(���ް�)�� ���� �Լ�
	function_without_params();
	
	//�Ķ����(���ް�)�� �ִ� �Լ�
	function_with_params(1, 2, 3);
	
	return 0;
}


//�Լ�����
int p(int num) {
	printf("num�� ��: %d \n", num);
	return num;
}

void function_without_return() {
	printf("��ȯ�� ���� �Լ�\n");
}

int function_with_return() {
	printf("��ȯ���� �ִ� �Լ�\n");
	return 10;
}

void function_without_params() {
	printf("���ް��� ���� �Լ�\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d %d %d�Դϴ�.\n", num1, num2, num3);
}
