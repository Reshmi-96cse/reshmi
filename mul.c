#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("\nenter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        printf("\n\n\n\t\tmultiplication table of %d\n",i);
        printf("\n************\n\n");
        for(j=1;j<=10;j++)
            printf("\t %d*%d=%d\n",i,j,(i*j));
    }
    getch();
}
