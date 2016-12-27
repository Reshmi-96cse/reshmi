#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,k=0;
    printf("\nenter the number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            k=1;
            break;
        }
    }
    if(k==0)
        printf("\nprime number");
    else
        printf("\nis not a prime");
    getch();
}
