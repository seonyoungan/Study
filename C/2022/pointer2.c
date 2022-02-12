#include <stdio.h>

void swap(int a, int b);
void swap__addr(int *a, int *b);
void changeArray(int *ptr);
int main_pointer2(void){
    int a = 10;
    int b = 20;

    //a와 b의 값 바꾸기(swap)

    printf("swap함수 전 => a = %d, b = %d", a, b);
    swap(a,b); //call by value(값에 의한 복사) => 값만 복사한다.
    printf("swap함수 후 => a = %d, b = %d", a, b);

    //메모리 공간에 있는 주소값을 넘기게 되면?
    printf("(주소값전달)swap함수 전 => a = %d, b = %d", a, b);
    swap_addr(&a,&b); //call by address(주소에 의한 복사) => 메모리 공간에 있는 주소의 값이 복사된다.
    printf("(주소값전달)swap함수 후 => a = %d, b = %d", a, b);


    int arr2[3] = {10,20,30};
    changeArray(arr2);
    changeArray(&arr2[0]); //첫 배열에 해당하는 주소를 던진 후 3번째 위치에 있는 열의 값이 바뀐 것임
    for(int i=0;i<3;i++){
        printf("%d\n", arr2[i]);
    }
    return 0;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
        printf("swap함수 내 => a = %d, b = %d", a, b);
}

void swap_addr(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("(주소값전달)swap함수 내 => a = %d, b = %d", *a, *b);

}

void changeArray(int *ptr){
    ptr[2] = 50;

}