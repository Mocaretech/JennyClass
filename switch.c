#include <stdio.h>
/*int main()
{
	int score;
	printf("Please enter your score:  ");
	scanf("%d", &score);
	switch(score / 10)
	{
		case 100:
			printf("Your grade is A");
			break;
		 case 80:
                        printf("Your grade is B");
                        break;
		 case 70:
                        printf("Your grade is C");
                        break;
		default:
			printf("invalide score");
			break;
	}
}*/
int main()
{
	int a;
	int b;
	int sum,subt,div,mult;
	char operator;
	printf("Please enter the operator:  ");
	scanf("%c",&operator);
	printf("Please enter two values:\n");
	scanf("%d %d", &a, &b);
	switch (operator)
	{
	case '+':
		sum = a + b;
		printf("sum is = %d\n",sum);
		break;
	case '-':
		subt = a - b;
		printf("difference is = %d\n",subt);
		break;
	case '/':
		div = a / b;
		printf("division is = %d\n",div);
		break;
	case '*':
		mult = a * b;
		printf("multiplication is = %d\n",mult);
		break;
	default:
		printf("End of the program");
	}
	return(0);
}

