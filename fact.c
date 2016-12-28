#include<stdio.h>
#include<conio.h>
int main()
{
int i,fact=1,n;
printf("enter the number");
scanf("%d",&n);
if(n==0)
    fact=1;
else
    {
        for(i=1;i<=n;i++)

 fact=fact*i;
}
printf("\nfactorial %d",fact);
return 0;
}
