#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z,count=0;
    printf("\nenter the number");
    scanf("%d",&x);
    y=x;
    while(y!=0)
    {
        y=y/10;
        count++;
    }
    printf("\n sum of the digits is %d",count);
    getch();
}
