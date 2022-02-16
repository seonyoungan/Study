#include <stdio.h>

struct GameInfo{
    char *name;
    int year;
    int price;
    char *company;

    struct GameInfo *friendGame; //구조체 안의 구조체
}

typedef struct GameInfomation{ //GameInformation를 지워버려도.. 실행이 되긴함
    char *name;
    int year;
    int price;
    char *company;

    struct GameInfo *friendGame; //구조체 안의 구조체
} GAME_INFO; //struct GameInfomation을 GAME_INFO로 치환하겠다는 것임.

int main_struct(void){
    /*
    char * name1 = "나도게임";
    int year1 = 2017;
    int price1 = 50;
    char * company1 = "나도회사";

    char * name2 = "나도게임";
    int year2 = 2017;
    int price2 = 50;
    char * company2 = "나도회사";

    //->단점. 비슷한 것들끼리 묶어서 관리하면 좋을 것 같당. -> 해결법 : struct사용
    */

   //구조체 사용
    struct GameInfo gameInfo1; // struct선언 struct명 변수명
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";

   //구조체출력
    printf("--게임출시 정보 1--\n\n");
    printf("게임명   : %s\n", gameInfo1.name);
    printf("발매년도 : %d\n", gameInfo1.year);
    printf("가격     : %d\n", gameInfo1.price);
    printf("회사명   : %s\n", gameInfo1.name);
    printf("\n\n");

    //구조체를 배열처럼 초기화해보기
    struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};
    printf("--게임출시 정보 2--\n\n");
    printf("게임명   : %s\n", gameInfo2.name);
    printf("발매년도 : %d\n", gameInfo2.year);
    printf("가격     : %d\n", gameInfo2.price);
    printf("회사명   : %s\n", gameInfo2.name);
    printf("\n\n");

    //구조체 배열
    struct GameInfo gameArray[2] = {
        {"나도게임", 2017, 50, "나도회사"};
        {"너도게임", 2017, 100, "너도회사"};
    };

    //구조체 포인터 방법1
    struct GameInfo * gamePtr; //미션맨
    gamePtr = &gameInfo1;
    printf("--미션맨의 게임 출시 정보--\n\n");
    printf("게임명   : %s\n", (*gamePtr).name);
    printf("발매년도 : %d\n", (*gamePtr).year);
    printf("가격     : %d\n", (*gamePtr).price);
    printf("회사명   : %s\n", (*gamePtr).name);
    printf("\n\n");

    //구조체 포인터 방법2
    printf("--미션맨의 게임 출시 정보--\n\n");
    printf("게임명   : %s\n", gamePtr->name);
    printf("발매년도 : %d\n", gamePtr->year);
    printf("가격     : %d\n", gamePtr->price);
    printf("회사명   : %s\n", gamePtr->name);
    printf("\n\n");

    //구조체 안의 구조체
    //연관업체 게임 소개
    gameInfo1.friendGame = &gameInfo2;
    printf("\n\n--연관업체의 게임출시 정보 --\n\n");
    printf("게임명   : %s\n", gamePtr.friendGame->name);
    printf("발매년도 : %d\n", gamePtr.friendGame->year);
    printf("가격     : %d\n", gamePtr.friendGame->price);
    printf("회사명   : %s\n", gamePtr.friendGame->name);
    printf("\n\n");

    //typeof
    //자료형에 별명 지정
    int i = 1;
    typeof int 정수;
    typeof float 실수;
    정수 정수변수 = 3; //int i = 3;과 똑같은 동작임
    실수 실수변수 = 3.23; // float a = 3.23;
    printf("정수변수: %d\n 실수변수: %2.f\n\n", 정수변수, 실수변수);
    
    //구조체에 typeof활용
    typedef struct GameInfo 게임정보; //gameInfo에 대한 별명 == 게임정보가 된 것임
    게임정보 game1;
    game1.name = "한글게임";
    game1. year = 2017;

    GAME_INFO game2;
    game2.name = "한글게임";
    game2/year = 2017;

    struct GameInformation game3;
    //typedef struct GameInfomation에서 GameInformation를 지울경우,, 이건 실행안됨.
    game3.name = "한글게임3";
    return 0;
}