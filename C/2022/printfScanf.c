#include <stdio.h>

int main_printfScanf(void) {

	//������Ʈ : �������� �������� ������ �Լ��� (�����ۼ�)
	//�̸�, ����, ������, Ű, ���˸�

	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("\n����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("\n�����Դ� �� kg�̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("\nŰ�´� �� cm�̿���?");
	scanf_s("%lf", &height);

	char what[256];
	printf("\n����� ���˴� �����ΰ���?");
	scanf_s("%s", what, sizeof(what));

	//�������� ���
	printf("\n\n------����������------ \n\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d��\n", age);
	printf("������ : %.2fkg\n", weight);
	printf("Ű : %.2lfcm\n", height);
	printf("����� ���˴� �����ΰ���? : %s\n", what);

	return 0;
}