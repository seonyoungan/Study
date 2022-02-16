#include <stdio.h>
#include <time.h>

//고양이 이름, 나이, 성격, 키우기 난이도
typeof struct {
    /* data */
    char *name;
    int age;
    char *character;
    int level;
} CAT;

//현재까지 보유한 고양이
int collection[5] = {0,0,0,0,0};

//전체 고양이 설정 리스트
void initCats();

//뽑은 고양이의 정보
int printCat();

//보유 고양이 목록 출력
int checkCollection()

CAT cats[5];

int main(void){
    //고양이 가챠돌리기 5마리 (중복도 가능)
    //모두 수집해서 열심히 키우기 
    srand(time(NULL));

    initCats();
    
    //무한반복문'
    while(1){
        printf("어느 고양이의 집사가 될까여\n 아무키나 눌러서 확인하세요: ");
        getchar(); //키가 들어올때까지 대기함

        int selected = randeom % 5; // 0~4 사이의  숫자 반환
        printCat(selected); //고양이 정보 출력
        collection[selected] = 1; //고양이 뽑기 처리 시작
        
        int collectAll = checkCollection();
        if (collectAll == 1){
            break;
        }

    }

    return 0;
}


void initCats(){
    cats[0].name = "안녕";
    cats[0].age = 5;
    cats[0].character = "귀여움";
    cats[0].level = 1;

    cats[1].name = "나는";
    cats[1].age = 3;
    cats[1].character = "착함";
    cats[1].level = 2;

    cats[2].name = "고양이";
    cats[2].age = 4;
    cats[2].character = "까칠";
    cats[2].level = 3;

    cats[3].name = "라고";
    cats[3].age = 2;
    cats[3].character = "애교냥";
    cats[3].level = 4;
    
    cats[4].name = "해";
    cats[4].age = 1;
    cats[4].character = "잘싸움";
    cats[4].level = 5;
}

int printCat(int selected){

    printf("\n\n ---당신이 뽑은 고양이는?--- \n\n")
    printf("이름   : $s\n", cats[selected].name);
    printf("나이   : $d\n", cats[selected].age);
    printf("성격   : $s\n", cats[selected].character);
    printf("난이도 : ");
    for (int i=0; i<cats[selected].level; i++){
        printf("%s", "★");
    }
    printf("\n"\n);
}

int checkCollection(){
    int collectAll = 1; //다모은상태로 가정
    printf("\n\n ---보유한 고양이 목록--- \n");
    for(int i=0;i<5;i++){
        if (colloetion[i]== 0){
            printf(" %10s", "(빈 박스) ");
            collectAll = 0; //다 모으지 못함
        } else{
            primtf("%10s", cats[i].name);
        }
    }
    printf("\-------------------------\n");

    if (collectAll == 1){
        printf("\n\n모든 고양이를 다 모았어요.");
    }

    return collectAll; 
}