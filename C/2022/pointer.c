#include <stdio.h>

int main(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	printf("a �ּ�: %d ��ȣ: %d\n",&a, a);
	printf("b �ּ�: %d ��ȣ: %d\n", &b, b);
	printf("c �ּ�: %d ��ȣ: %d\n", &c, c);


	int *pointer; //�����ͺ���
	pointer = &a;
	printf("a�� �ּҰ��� pointer������ �ִ�..�̰Ŷ��� : %d\n", pointer);
	printf("a�� �� ���Է��ϰ� �����ĺ����� a�����´�.: %d\n\n", *pointer);

	pointer = &b;
	printf("b�� �ּҰ��� pointer������ �ִ�..�̰Ŷ��� : %d\n", pointer);
	printf("b�� �� ���Է��ϰ� �����ĺ����� b�����´�.: %d\n\n", *pointer);

	pointer = &c;
	printf("c�� �ּҰ��� pointer������ �ִ�..�̰Ŷ��� : %d\n", pointer);
	printf("c�� �� ���Է��ϰ� �����ĺ����� c�����´�.: %d\n\n", *pointer);
	
	//�� ��ȣ�� 3 ���غ���
	pointer = &a;
	*pointer = *pointer * 3; //���⼭ ���� �ٲ����ϱ� ���� a��: 1, *pointer��: 3
	printf("a �ּ�: %d ��ȣ: %d\n", &a, a);
	printf("a�� �ּҰ��� pointer������ �ִ�..�̰Ŷ��� : %d\n", pointer);

	printf("a�� �� ���Է��ϰ� �����ĺ����� a�����´�.: %d\n\n", *pointer);

	//pointer *3 �ߴ� ������ -2�ϼ���
	int* spy = &a;
	*spy = *spy - 1;
	printf("a�ּ� : %d\n", spy);
	printf("a�� : %d\n\n", *spy);

	*spy = *spy - 1;
	printf("b�ּ� : %d\n", spy);
	printf("b�� : %d\n\n", *spy);

	*spy = *spy - 1;
	printf("c�ּ� : %d\n", spy);
	printf("c�� : %d\n\n", *spy);

	//���� ���� �ٲ������..?
	printf("a �ּ�: %d ��ȣ: %d\n", &a, a);
	printf("b �ּ�: %d ��ȣ: %d\n", &b, b);
	printf("c �ּ�: %d ��ȣ: %d\n\n", &c, c);

	//������ �ּҰ��� ����Ű�� ������ ��ü�� ������ ���� ���� �ٲ� �� �ִ�!

	printf("p�ּҰ�:%d\n", &pointer);
	printf("s�ּҰ�:%d\n", &spy);

	return 0;
}