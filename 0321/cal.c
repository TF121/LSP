#include <stdio.h>

int main()
{
	char operator;
	int a;
	int b;

	printf("연산자를 입력하세요 \n");
	scanf("%c", &operator);
			
	printf("a = ");
	scanf("%d", &a);

	printf("b = ");
	scanf("%d", &b);

	 switch(operator)
     {
         case '+':
             printf("%d + %d = %d \n", a , b, a+b);
             break;

         case '-':
             printf("%d - %d = %d \n", a, b, a-b);
			 break;

         case '*':
             printf("%d * %d = %d \n", a, b, a*b);
			 break;

         case '/':
             printf("%d / %d = %d \n", a, b, a/b);
             break;
     }

	return 0;
}
