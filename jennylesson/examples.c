#include <stdio.h>

int a = 0;
int b = 0;
float result=0;
int _scanf();
//int _bitwise();
int main()
{
//	result = a > b && printf("Jelil\n") || printf("lectures\n");
//	printf("%d", result);
//	printf("\n");
	_scanf();
//	_bitwise();
	return (0);
}

//int _bitwise()
/*{
//	printf("%d\n", a & b);
//	printf("%d\n", a && b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
	return(0);
}*/
int _scanf()
{
//	int x;
	scanf("%4d %d",&a,&b); //The reason we are putting & is because the address does not contain anything yet, it want to take a value but if it take a or b it means we already assgn value to them then we cant use scanf function.
	result = a + b;
	printf("result is : %f\n",result);
//	printf("%d\n", x);
	return(0);
}

