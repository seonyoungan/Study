#include <stdio.h>
#include <time.h>

/* 조건1 물고기 6마리가 있다.
조건2 물고기는 어항에 살고 있고 사막이다.
조건3 사막이 더워 물이 빨리 증발함
조건4 물고기는 점점 커져서 나중에 머금 */

int level;
int arrayFish[6];
int *cursor; // arrayFish를 가리키면서 어떤 물고기에 물을 줄것인가.
void initData();
void printFishes();
void decreseWater(long elapsedTime);

int main(void){
    long startTime = 0;// 시간은 보통 long사용
    long totalElapsedTime = 0; //총경과시간
    long prevElapsedTime = 0; // 직전 경과 시간(직전에 물 준 간격)

    int num; //어항에 물 몇번 줄 것인가 사용자가 입력함
    initData();

    cursor = arrayFish; //cursor[0] cursor[1]

    startTime = clock(); //현재 시간을 m/s 단위로 반환
    while(1){ //1 ==> 무한반복
        printFishes();
        getchar(); // 임시 사용자 입력 대기
        printf("몇번어항에 물을 주시겠어요? ");
        scanf_s("%d", &num);

        //입력값 체크
        if (num < 1 || num > 6){
            printf("입력값이 잘못되었어요");
            continue;
        }

        //총 경과시간
        totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
        printf("총 경과 시간: %1d초", totalElapsedTime);

        //직전에 물 준 시간 체크 이후 흐른 시간
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("최근 경과 시간: %1d초", prevElapsedTime);

        //어항의 물을 감소(증발)
        decreseWater(prevElapsedTime);

        //사용자가 입력한 어항에 물을 준다.
        //1. 어항의 물이 0 -> 물 주지 않는다. (이미 물고기 주금)
        if(cursor[num-1] <=0){
            printf("물고기 죽었어요.. 물을 주지 않습니다...");
        }  
        //2. 어항에 물이 0이 아닌 경우 -> 물을 주는데 100보다 작거나 같으면 줌
        else if(cursor[num-1]+1 <= 100){
            printf("%d번어항에 물을 줍니다");//물준다.
            cursor[num=1] += 1;
        }

        //레벨없을 할건지 말건지(레벨업 20초마다 되도록 수행함)
        if (totalElapsedTime / 20 > level-1){
            level++; //level : 1-> level : 2
            printf("**추카추카추레벨업 : 기존%d레벨 -> %d로 업그레이드", level-1, level);
            if (level == 5){
                printf("\n\n 축하합니다. 최고 레벨을 달성했어요. 게입을 종료합니당.");
                exit(0);
            }   
            //모든 물고기가 죽었는지 확인
            //여기부터 다시 시작해야함!
        }
    }
    return 0;
}

void initData(){
    int level = 1;
    for(int i = 0; i< 6; i++){
        arrayFish[i] = 100;  //어항의 물 높이
    }
}

void printFishes(){
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1,2,3,4,5,6);
    for(int i=0; i<6; i++){
        printf(" %4d ", arrayFish[i]);
    }
    printf("\n\n");
}

void ecreseWater(long elapsedTime){
    for (int i = 0;i<6;i++){
    arrayFish[i] -= (level + 3 * (int)elapsedTime); //3 : 난이도조절을 위한 값
    if(arrayFish[i] < 0){
            arrayFish[i] = 0;
        }
    }
}