#include<stdio.h>
#include<conio.h>
void main()
{

    int a;
    printf("\n enter the number");
    scanf("%d",&a);
    if((a%400==0)||(a%4==0)&&(a%100!=0))
    {
        printf("\n given num ** %d **is leap year",a);
    }
    else
    {
        printf("\n %d is not a leap year ",a);
    }
    getch();
}
