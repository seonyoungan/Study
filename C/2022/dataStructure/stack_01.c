#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;


int isEmpty();
int isFull();
int push(int data);
int pop();
int peek();
void printStack();

int main(){
  printStack(); //Error: Stack is Empty!!
  push(1); //1추가
  push(2); //2추가
  push(3); //3추가
  push(4); //4추가
  push(5); //5추가
  printStack(); // 1 2 3 4 5
  pop(); //5삭제
  pop(); //4삭제
  pop(); //3삭제
  printStack(); // 1 2
  pop(); //2삭제
  pop(); //Error: Stack is Empty!! 
  push(6); //6추가
  push(7); //7추가
  push(8); //8추가
  push(9); //9추가
  push(10); //10추가
  printStack(); // 6 7 8 9 10
  push(11); //Alert: Stack is Full!! 

  return 0;
}

// 0==거짓 1==참
int isEmpty(){
  if(top==-1){ //스택이 공백이면
    printf("Error: Stack is Empty!\n"); //에러메세지
    return 1; //참
  }
  else{
    return 0; //거짓
  }
}

int isFull(){
  if(top>=SIZE-1){ //스택이 꽉찼으면
    printf("Error: Stack is Full!\n"); //에러메세지
    return 1; //참
  }
  else{
    return 0; //거짓
  } 
}

int push(int data){
  if(isFull() == 0){ //꽉찬게 아니면
    top++; //top에 1증가
    stack[top] = data; //data변수에 stack[top] 대입
  }
  else{
    printf("Alert: Stack is Full.\n"); //상태알림  
  }  
}

int pop(){
  if(isEmpty() == 0){ //꽉찬게 아니면
    top--; //top에 1증가
    return stack[top]; //==stack[data-1]
  }
  else{
    printf("Alert: Stack is Empty.\n");; //상태알림  
  }  
}

int peek(){ //스택의 현재 위치 반환
  if(isEmpty() == 0){ //스택이 비어있지 않으면
    return stack[top]; //현재 맨 위의 값 보여줌
  }
}

void printStack(){
  //stack의 모든 원소 출력
  if(isEmpty()==0){
    printf("\[");
    for(int i=0;i<=top;i++){
      printf("%d ", stack[i]);
    }
    printf("\]\n");
  }
}