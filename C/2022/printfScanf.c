#include <stdio.h>

int main_printfScanf(void) {

	//프로젝트 : 경찰관이 범죄자의 정보를 입수함 (조서작성)
	//이름, 나이, 몸무게, 키, 범죄명

	char name[256];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("\n몇살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("\n몸무게는 몇 kg이에요?");
	scanf_s("%f", &weight);

	double height;
	printf("\n키는는 몇 cm이에요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("\n당신의 범죄는 무엇인가요?");
	scanf_s("%s", what, sizeof(what));

	//조서내용 출력
	printf("\n\n------범죄자정보------ \n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d세\n", age);
	printf("몸무게 : %.2fkg\n", weight);
	printf("키 : %.2lfcm\n", height);
	printf("당신의 범죄는 무엇인가요? : %s\n", what);

	return 0;
}