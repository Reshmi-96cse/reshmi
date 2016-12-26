#include<stdio.h>
#include<conio.h>
void main()
{
    int r,k,res=0,n;
    printf("\n enter the number");
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        r=n%10;
        res=res*10+r;
        n/=10;
    }
        if(k==res)
            printf("\npalindrom");
        else
            printf("not a palindrom");
        getch();
    }

