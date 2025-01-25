#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables  */
char contents[STACK_SIZE];
int top = 0;

/* prototype */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	char ch;

	printf("Enter parentheses and/or braces: ");
	
	while ((ch = getchar()) != '\n') {
		if (ch == ')') {
			if (pop() == '(')
				continue;	
			else {
				printf("Parentheses/braces are not nested properly");
				return 0;
			}
		}

		else if (ch == '}') {
			if (pop() == '{')
				continue;
			else {
				printf("Parentheses/braces are not nested properly");
				return 0;
			}
		}

		else
			push(ch);
	}
	
	if (is_empty())
		printf("Parentheses/braces are nested properly");
	else
		printf("Parentheses/braces are not nested properly");
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char c)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = c;
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
	printf("Stack overflow");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Stack underflow");
	exit(EXIT_FAILURE);
}
