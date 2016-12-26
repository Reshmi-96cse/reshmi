#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,r=1,c;
    printf("\n enter the base");
    scanf("%d",&x);
    printf("\nenter the exp");
    scanf("%d",&y);
    for(c=0;c<y;c++)
    {
        r=r*x;
    }
    printf("\n power is %d",r);
    getch();
}
