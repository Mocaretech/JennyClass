#include <stdio.h>
/*There are different unformatted input functions which may include
getchar()
getch()
getche()
gets()
*/
//int _priintf();
//int getss();
int putcharr();
//int getchaa();
int main()
{
//	_priintf();
//	getchaa();
//	getss();
	putcharr();
	return(0);
}
/*
int getchaa()
{
	char ch;
	ch = getchar();
	printf("%c\n", ch);
}
*/
/*
int _priintf()
{
	char _printf;
	_printf = printf("What are you printing\n");
	//printf("%c",pr); 
	return(_printf);
}*/
/*
int getss()
{
	char chh[20];
	gets(chh);
	return(0);
}*/



/*FORMATTED OUTPUT FUNCTIONS
putchar()
putch()
puts()
*/
// for putchar
int putcharr()
{
	char cc;
	cc = getchar();
//	printf("%c\n",cc);
	putchar(cc);
	putchar('\n');
	return(0);
}
