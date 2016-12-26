#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b;
    printf("\nenter the first limit");
    scanf("%d",&a);
    printf("\nenter the last limit");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        printf("\nodd numbers are %d",i);
    }
    getch();
}
