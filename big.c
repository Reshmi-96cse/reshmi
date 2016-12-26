#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("\nenter the number");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("\nbiggest  num is %d",a);
    }
     else if(b>c)
    {
        printf("\nbiggest num is %d",b);
    }
    else
    {
        printf("\n biggest is %d",c);
    }
    getch();
}
