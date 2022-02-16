#define CRT_SECURE_NO_WARNINGS;
#include <stdio.h>
#define MAX 10000 //상수 


int main(void){
    /*
    //파일입출력
    //파일에 데이터를 저장하구,, 저장된 데이터를 불러오기

    //fputs, fgets 한쌍 : 문자열 저장, 불러오기

    //1.fputs 파일 쓰기
    char line[MAX]; //Char line[10000]과 동일
    FILE *file = fopen("c:\\test1.txt", "wb");
    //파일여는 방식 : r(read), w(write), a(append, 이어쓰기)
    //t(text), b(binary)

    if (file == NULL){
        printf("파일열기 실패");
        return 1;
    }
    fputs("fputs를 이용해 글을 적어봅니다.\n", file);
    //fputs(작성할 내용, 파일포인터)
    fputs("잘 적히는지 확인해보세요..\n", file);
    fclose(file);
    //fclose 안했는데,, 프로그램에 문제가 생긴다? 데이터손실 생길수도.. 항상 파일은 닫아줘야ㅐ행


    //2.fgets 파일 읽기
    FILE *file = fopen("c:\\test1.txt", "rb");
    //파일여는 방식 : r(read), w(write), a(append, 이어쓰기)
    //t(text), b(binary)

    if (file == NULL){
        printf("파일열기 실패");
        return 1;
    }
    while(fgets(line, MAX, file) != NULL){
        printf("%s", line);
    }
    fclose(file);
    */

    //fprintf, fscanf 한쌍 : 출력과 입력

    //3. fprintf 로또번호 저장 후 가져오깅~
    int num[6] = {0,0,0,0,0,0}; //추첨번호
    int bonus = 0; //보너스번호
    char str1[MAX];
    char str2[MAX];
    /*FILE *file = fopen("c\\test2.txt","wb");
    if (file == NULL){
        printf("파일열기 실패\n");
        return 1;
    } 
    //로또 추첨번호 저장
    fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1,2,3,4,5,6);
    fprintf(file, "%s %d\n", "보너스번호", 7); */
    
   
    //fscanf : 파일 읽기
    FILE *file = fopen("c:\\test2.txt", "rb");
    if (file == NULL){
        printf("파일열기 실패\n");
        return 1;
    }
    fscanf(file, "%s %d %d %d %d %d %d\n",
        str1, &num[0],&num[1],&num[2],&num[3],&num[4],&num[5]);
    printf("%s %d %d %d %d %d %d\n\\n",
        str1, num[0],num[1],num[2],num[3],num[4],num[5]);

    fscanf(file,"%s %d\n", str2, &bonus);
    printf("%s %d\n\n", str2, bonus);

    fclose(file);

    return 0;
}