#include <stdio.h>
#define SIZE 100

int stack[SIZE]; //배열
int top = -1;

int IsEmpty();
int IsFull();
void push();
int pop();


int main(void){
    push(3);
    push(2);
    push(12);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}

int IsEmpty(){
    if(top<0)  //비어있는 상태
        return true;
    else
        return false;
}

int IsFull(){
    if(top>=SIZE-1) //꽉찬 상태
        return true;
    else
        return false;
}

void push(int data){
    if(!IsFull()){ // stack != Full
        top++; // topcnrk
        stack[top] = data; //해당공간에 data변수 삽입
    }
    else{
        printf("stack is full.");
    }
}
int pop(){
    if(!IsEmpty()){ //stack != Empty
        top--;
        stack[top] = data;
    } 
    else{
        printf("stack is empty.");
    }
}