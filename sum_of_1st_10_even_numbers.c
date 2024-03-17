#include<stdio.h>
void main()
{
		int sum=0,e=2;
	for(int i=1;i<11;i++)
	{	sum=sum+e;
		e+=2;
	}
	printf("Sum of 1st 10 even numbers is %d\n",sum);
}
