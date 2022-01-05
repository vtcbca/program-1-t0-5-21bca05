/* Write a program to anter any number and print reverse number
Date:24/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n Enter value for reverse number a :");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("\n Reverse number is %d",c);
	getch();
}