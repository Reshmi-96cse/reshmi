#include<stdio.h>
#include<stdio.h>
void main()
{
int a;
printf("\n enter the number");
scanf("%d",&a);
if((a%400==0)||(a%4==0)&&(a%100!=0))
{
printf("leap year");
}
else
{
printf("\nnot a leap year");
}
getch();
}
