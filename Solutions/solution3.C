/*Write a program to enter any number and check it is palindrome or not
Date:24/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,sum=0;
	clrscr();
	printf("\n Enter the number for a:");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=a%10;
		sum=(sum*10)+b;
		a=a/10;
	}
	if(c==1)
		printf("\n Number is not palindrome number");
	else
		printf("\n Number is palindrome number");
	getch();
}
