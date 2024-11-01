#include <stdio.h>
//Which of the number is the largest of the three numbers

int main()
{
	int num1;
	int num2;
	int num3;

	printf("Please enter three the numbers\n");
	scanf(" %d %d %d",&num1, &num2,&num3);
	if (num1 >= num2)
	{
		if (num1 >= num3)
		{
			printf("%d is the highest number\n",num1);
		}
		else
		{
			printf("%d is the highest",num3);
		}
	}
	else if(num2 >= num1)
	{
		if(num2 >= num3)

		{
		printf("%d is the highest\n",num2);
		}
		else
		{
			printf("%d is the highest",num3);
		}
	}

	printf("End of the program\n");
	return(1);
}
