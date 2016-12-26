#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    printf("\n enter the start limit");
    scanf("%d",&j);
    printf("\n enter the last limit");
    scanf("%d",&k);
    for(i=j;i<=k;i++)
    {
        if(i%2==0)
        {
            printf("\nodd number are %d",i);
        }
    }
}
