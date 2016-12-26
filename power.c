#include<stdio.h>
#include<conio.h>
void main()
{
    int b,e,r=1,c;
    printf("\nenter the base");
    scanf("%d",&b);
    printf("\nenter the exponental");
    scanf("%d",&e);
    for(c=0;c<e;c++)
    {
        r=r*b;
    }
    printf("power of the number is %d",r);
    getch();
}
