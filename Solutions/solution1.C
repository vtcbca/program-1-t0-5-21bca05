/*Write a program to enter any number and print sum of digits
Date:24/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	clrscr();
	printf("\n Enter value for a:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("\n sum is %d",sum);
	getch();
}