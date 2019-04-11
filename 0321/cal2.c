#include <stdio.h>
#include "cal.h"

int main()
{
	int a, b;
	char operator;

	printf("연산자를 입력하세요 \n");
	scanf("%c", &operator);

	printf("A 값 = ");
	scanf("%d", &a);

	printf("B 값 = ");
	scanf("%d", &b);

	switch(operator)
	{
		case '+':
			printf("%d + %d = %d \n", a , b, Add(a, b));
			break;

		case '-':
			printf("%d - %d = %d \n", a, b, Sub(a, b));
			break;

		case '*':
			printf("%d * %d = %d \n", a, b, Mul(a, b));
			break;

		case '/':
			printf("%d / %d = %d \n", a, b, Div(a, b));
			break;
	}

	return 0;
}

