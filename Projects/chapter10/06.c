#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

void calculate_rpn(void);

int main(void)
{
	for (;;) {
		calculate_rpn();
	}
	return 0;
}

void make_empty(void)
{
	top = 0;
	return;
}

bool is_empty(void)
{
	if (top == 0)
		return true;
	else
		return false;
}

bool is_full(void)
{
	if (top == STACK_SIZE)
		return true;
	else
		return false;
}

void push(int i)
{
	if (is_full())	
		stack_overflow();
	else {
		contents[top++] = i;
		return;
	}
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else 
		return contents[--top];
}

void stack_overflow(void)
{
	printf("STACK OVERFLOW");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("STACK UNDERFLOW");
	exit(EXIT_FAILURE);
}

void calculate_rpn(void)
{
	char ch;
	int oper1 = 0, oper2 = 0, result = 0;
	printf("Enter an RPN expression: ");
	
	for (;;) {
		scanf(" %c", &ch);

		if (ch == 'q')
			exit(EXIT_SUCCESS);
		else if (1 <= ch - '0' && ch - '0' <= 9)
			push((int)(ch - '0'));
		else {
			switch (ch) {
				case '+': {
					oper1 = pop();
					oper2 = pop();
					result = oper2 + oper1;
					push(result);
					break;
				}
				case '-': {
					oper1 = pop();
					oper2 = pop();
					result = oper2 - oper1;
					push(result);
					break;
				}
				case '*': {
					oper1 = pop();
					oper2 = pop();
					result = oper2 * oper1;
					push(result);
					break;
				}
				case '/': {
					oper1 = pop();
					oper2 = pop();
					result = oper2 / oper1;
					push(result);
					break;
				}
				case '=': {
					printf("Value of expresion: %d\n", pop());
					return;
				} 
				default: break;
			}
		}
	}
}
