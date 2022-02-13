#include <stdio.h>
#include <time.h>

/* ����1 ����� 6������ �ִ�.
����2 ������ ���׿� ��� �ְ� �縷�̴�.
����3 �縷�� ���� ���� ���� ������
����4 ������ ���� Ŀ���� ���߿� �ӱ� */

int level;
int arrayFish[6];
int* cursor; // arrayFish�� ����Ű�鼭 � ����⿡ ���� �ٰ��ΰ�.
void initData();
void printFishes();
void decreseWater(long elapsedTime);
int checkFishAlive();

int main(void) {
    long startTime = 0;// �ð��� ���� long���
    long totalElapsedTime = 0; //�Ѱ���ð�
    long prevElapsedTime = 0; // ���� ��� �ð�(������ �� �� ����)

    int num; //���׿� �� ��� �� ���ΰ� ����ڰ� �Է���
    initData();

    cursor = arrayFish; //cursor[0] cursor[1]

    startTime = clock(); //���� �ð��� m/s ������ ��ȯ
    while (1) { //1 ==> ���ѹݺ�
        printFishes();
        printf("������׿� ���� �ֽðھ��? ");
        scanf_s("%d", &num);

        //�Է°� üũ
        if (num < 1 || num > 6) {
            printf("\n\n�Է°��� �߸��Ǿ����\n");
            continue;
        }

        //�� ����ð�
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
        printf("\n\n�� ��� �ð�: %1d��", totalElapsedTime);

        //������ �� �� �ð� üũ ���� �帥 �ð�
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("\n\n�ֱ� ��� �ð�: %1d��", prevElapsedTime);

        //������ ���� ����(����)
        decreseWater(prevElapsedTime);

        //����ڰ� �Է��� ���׿� ���� �ش�.
        //1. ������ ���� 0 -> �� ���� �ʴ´�. (�̹� ����� �ֱ�)
        if (cursor[num - 1] <= 0) {
            printf("\n\n����� �׾����.. ���� ���� �ʽ��ϴ�...\n");
        }
        //2. ���׿� ���� 0�� �ƴ� ��� -> ���� �ִµ� 100���� �۰ų� ������ ��
        else if (cursor[num - 1] + 1 <= 100) {
            printf("\n\n%d�����׿� ���� �ݴϴ�\n", num);//���ش�.
            cursor[num = 1] += 1;
        }

        //�������� �Ұ��� ������(������ 20�ʸ��� �ǵ��� ������)
        if (totalElapsedTime / 20 > level - 1) {
            level++; //level : 1-> level : 2
            printf("\n\n**��ī��ī�߷����� : ����%d���� -> %d�� ���׷��̵�\n", level - 1, level);
            if (level == 5) {
                printf("\n\n �����մϴ�. �ְ� ������ �޼��߾��.\n ������ �����մϴ�.\n");
                exit(0);
            }
            //��� ����Ⱑ �׾����� Ȯ��
            if (checkFishAlive() == 0) {
                printf("\n\n��� ����Ⱑ �׾����.\n");

            }
            else {
                printf("\n\n����Ⱑ ���� ����־��.\n");
            }
            prevElapsedTime = totalElapsedTime;

            //10��->15�� (5�� : prevElapsedTime -> 15��) -> 25��(10��..?)
            
        }
    }
    return 0;
}

void initData() {
    int level = 1;
    for (int i = 0; i < 6; i++) {
        arrayFish[i] = 100;  //������ �� ����
    }
}

void printFishes() {
    printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 6; i++) {
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}

void decreseWater(long elapsedTime) {
    for (int i = 0; i < 6; i++) {
        arrayFish[i] -= (level + 3 * (int)elapsedTime); //3 : ���̵������� ���� ��
        if (arrayFish[i] < 0) {
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive() {
    for (int i = 0; i < 6; i++) {
        return 1; //��:1 ����:0
    }
}