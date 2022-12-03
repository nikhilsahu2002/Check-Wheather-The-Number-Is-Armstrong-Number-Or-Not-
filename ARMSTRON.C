#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,sum=0,rem;
clrscr();
	printf("Enter Number To Check = ");
	scanf("%d",&num);
	i=num;
	while(num>0)
	{
		rem = num%10;
		sum = sum + (rem * rem * rem);
		num = num/10;
	}
       //	printf("%d \n",sum);
	if(i==sum)
	printf("Armstrong Number");
	else
	printf("Not Armstrong Number");

getch();
}
