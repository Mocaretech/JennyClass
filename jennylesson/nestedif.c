#include <stdio.h>

int main()
{
	int score;
	printf("Please enter your score");
	scanf("%d", &score);
	if (score >= 90)
	{
		if (score > 95)
		{
			printf("A+\n");
		}

		else
		{
		}	printf("A\n");
	}	
	else if (score >=80 && score <= 89)
	{
		if (score > 85)
		{
			printf("B+\n");
		}
		else
		{
			printf("B\n");
		}
	}
	else
	{
		printf("The score is print based on student score\n");
	}
return (0);
}
