#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 100
#define MAX_SIZE 100

typedef struct var {
	int num; //number
	char alph; // '*','/','+','-','(',')'
}var;

typedef struct stack {
	int data[MAX];
	int top
}stack;

char work;
char checking_print[] = "print";
int var_index = 0;
var var_array[MAX_SIZE];

bool notOperator(char a[]);
int operatorRank(char b);
void init(stack* c);
int isEmpty(stack* c);
int isFull(stack* c);
int push(stack* c, int a);
int pop(stack* c);
int peek(stack* c);
int prec(char op);


int main(void) {

}

bool notOperator(char a[]) {
	char operator[6] = { '*','/','+','-','(',')' };
	for (int i = 0; i < sizeof(a); i++) {
		for (int j = 0; j < 6; j++) {
			if (a[j] == operator[i]) {
				return false; //operator is false
			}
		}
		return true; //not operator is ture
	}
}

int operatorRank(char b) { //( ) , + - , * / %
	if (b == '(') {
		return (0);
	}
	if (b == '+' || b == '-') {
		return (1);
	}
	if (b == '*' || b == '/'|| b == '%') {
		return (2);
	}

	else {
		return (3); //error?
	}
}

void init(stack* c) {
	c->top = -1; //
}

int peek(stack* c) {
	return (c->data[c->top]);
}
int isEmpty(stack* c) {
	if (c->top <= 0)
		return (1); // true
	else 
		return (0); // false
}
int isFull(stack* c) {
	if (c->top >= MAX - 1)
		return (1); // true
	else
		return (0); // false
}
int push(stack* c, int a) {
	if(c->top != isFull(a)){
		printf("error");
	}
	else {
		c->top = c->top + 1;
		c->data[c->top] = a;
	}

}
int pop(stack* c) {
	int a;
	if (c->top != isEmpty(a)) {
		printf("error");
	}
	else {
		c->top = c->top - 1;
		a = c->data[c->top]; //순서 바꿔야되나..?
		return a;
	}
}

int prec(char op) {
	switch (op) {
	case '(':
	case ')':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
	case '%':
		return 2;
	}
	return -1;
}

void infix_to_postfix(char exp[], char res[]) {

	int i = 0, j = 0;
	char ch, top_op, cx;
	int len = strlen(exp);
	stack s;
	init(&s);
	for (i = 0; i < len; i++) {
		ch = exp[i];
		switch (ch) {
		case'+': case '-': case '*': case '/': case '%':
			while (!isEmpty(&s) && (prec(ch) <= prec(peek(&s)))) {
				printf("%c", cx = pop(&s));
				res[j++] = cx;
			}
			push(&s, ch);
			break;

		case '(':
			push(&s, ch);
			break;

		case ')':
			top_op = pop(&s);
			while (top_op != '(') {
				printf("%c", top_op);
				res[j++] = top_op;
				top_op = pop(&s);
			}
			break;

		default:
			printf("%c", ch);
			res[j++] = ch;
			break;
		}
	}

	while (!isEmpty(&s)) {
		printf("%c", cx = pop(&s));
		res[j++] = cx;
	}
}
