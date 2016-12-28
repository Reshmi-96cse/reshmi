#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,r,n;
    printf("\nenter the number");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
     r=n%10;
     sum+=(r*r*r);
     n=n/10;
    }
    if(sum==num)
    {
        printf("\nthe num is amstrong");
    }
        else
        {
            printf("\nnot amstrong");
    }
    return 0;
}
