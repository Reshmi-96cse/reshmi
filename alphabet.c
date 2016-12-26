#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\nenter the letter");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("\n %c is an alphabet",ch);
    }
    else
    {

    printf("\n %c not an salphabet",ch);
    }
}
