#include <stdio.h>

int arrayAnimal[4][5]; // 카드지도(20장의 카드)
int checkAnimal[4][5]; // 뒤집혔는지 여부확인
char * strAnimal[10];
void initAnimalArray(); //카드 지도 (총20장을 표시하는 것~)
void initAnimalName(); //10마리 동물카드 선언
void shuffleAnimal(); //지도에다가 동물카드 섞어보기
int getEmptyPosition(); //좌표에서 빈공간 찾기
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();


int main(void){

    //10마리 다른동물(각카드 2장씩)-> 사용자에게 2개카드 입력값받음 -> 같은동물이면 카드 뒤집기
    //모든동물쌍 맞추면 겜 종료
    //총 실패횟수 알려주기

    srand(time(NULL));
    initAnimalArray();
    initAnimalName();
    
    shuffleAniaml();

    int failCount = 0;
    
    while(1){
        int select1 = 0; //사용자가 선택한 1번째수
        int select2 = 0; //사용자가 선택한 2번째수

        printAnimals(); //동물위치 출력
        printQuestion(); //문제출력(카드 지도)
        printf("뒤집을 카드를 고르세오 : ");
        scanf_s("%d %d", select1, select2);
        if (select1 == select2){ //같은카드고르면 무효!
            continue;
        }
        //좌표에 해당하는 카드를 뒤집어보고 같은지 아닌지 확인
        int firstSelect_x = conv_pos_x[select1];
        int firstSelect_y = conv_pos_y[select1];

        int secondSelect_x = conv_pos_x[select1];
        int secondSelect_y = conv_pos_y[select1];

        if (checkAnimal[firstSelect_x][firstSelect_y]==0 && checkAnimal[secondSelect_x][secondSelect_y=0]
        &&arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y]){
            //카드가 뒤집히지 않았는지 && 두동물이 같은지 확인
            printf("GOOD! : %S 발견 \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1; //다음에 조회할 때 선택된 카드인걸로 쳐야되니까
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }else{ //선택한 두 카드가 다른동물인 경우
            printf("\nno~ 틀렸거나 이미 뒤집힌 카드입니다.\n\n");
            printf("%d %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            failCount++;
        }

        //모든동물 찾았는지 여부 : 0 거짓, 1 참
        if (foundAllAnimals() == 1){
            printf("\n\n 축하해요. 모든 동물을 다 찾았어요.\n");
            printf(" 실수횟수: %d", failCount);
            break;
        }
    }
    return 0;
}


void initAnimalArray(){
    for(int i=0;i<4;i++){

        for (int j=0;j<5;j++){
            initAnimalArray[i][j] = -1; //-1 == 비어있다는 것을 의미함
            return 0;
        }
    }
}

void initAnimalName(){
    stringAnimal[0] = "원숭이";
    stringAnimal[1] = "하마";
    stringAnimal[2] = "강아지";
    stringAnimal[3] = "고양이";
    stringAnimal[4] = "낙타";
    stringAnimal[5] = "타조";
    stringAnimal[6] = "호랑이";
    stringAnimal[7] = "기린";
    stringAnimal[8] = "돼지";
    stringAnimal[9] = "코끼리";
}

void shuffleAniaml(){
    //ㅁㅁㅁㅁㅁ  0  1  2  3  4
    //ㅁㅁㅁㅁㅁ  5  6  7  8  9
    //ㅁㅁㅁㅁㅁ 10 11 12 13 14
    //ㅁㅁㅁㅁㅁ 15 16 17 18 19

    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            int pos = getEmptyPosition(); //비어있는 위치 반환
            int x = cov_pos_x(pos);//반환한 값의 위치(x좌표)
            int y = cov_pos_y(pos);//반환한 값의 위치(y좌표)
        }
        arrayAnimal[x][y] = i;
    }
}

int getEmptyPosition(){
    while(1){ //무한루프
        int randPos = rand() % 20; //0-19사이의 숫자를 반환함
        //
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if(arrayAnimal[x][y] ==-1 ){
            return randPos;
        }

    }
    return 0;
}

int conv_pos_x(int x){
    //5로 나누면,, -> 좌표가..
    //ㅁㅁㅁㅁㅁ  0  1  2  3  4    ->    0 0 0 0
    //ㅁㅁㅁㅁㅁ  5  6  7  8  9    ->    1 1 1 1
    //ㅁㅁㅁㅁㅁ 10 11 12 13 14    ->    2 2 2 2
    //ㅁㅁㅁㅁㅁ 15 16 17 18 19    ->    3 3 3 3
    return x / 5;
}

int conv_pos_y(int y){

    return y % 5; //y를 5로 나눈 나머지값..
}

void printAnimals(){

     printf("\n\n=====비밀인데 몰래 보여줍니당=====\n\n");
    for (int i = 0; i < 4; i++){
        for(int j = 0; j< 5; j++){
            printf("%8s", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n\n===============================\n\n");
}
void printQuestion(){
    printf("\n\n문제\n");
    int seq=0;
    //            seq                      checkAnimal
    //ㅁㅁㅁㅁㅁ   0  1  2  3  4            0 0 0 0 0
    //ㅁㅁㅁㅁㅁ 하마 6  7  8  9            1 0 0 0 0
    //ㅁㅁㅁㅁㅁ  10 11 12 하마 14          0 0 0 1 0
    //ㅁㅁㅁㅁㅁ  15 16 17 18 19            0 0 0 0 0

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            //카드뒤집어서 정답맞추면 동물이름
            if (checkAnimal[i][j]) != 0){
                printf("%8s", strAnimal[arrayAnimal[i][j]]);
            }
            //아직 뒤집지못했으면(정답 못맞췄으면) 뒷면->카드위치를나타내는 숫자
            else{
                printf("%8d", seq); 
            }
            seq++; // index가 늘어나야하니까 시퀀스++해줌
        }
    }
}

int foundAllAnimals(){

    for (int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if (checkAnimal[i][j]==0){
                return 0;
            }
        }
        printf("\n");
    }
    return 1; //모든동물 찾음
}