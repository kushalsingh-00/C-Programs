/*
-------------------------------------------------------
Name         : Character Cases
Author       : Kushal Singh Rathore
Discription  : Changing Of Cases Enterd By User
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a,b;
    char c,d;
    printf("enter character in any case");
    scanf("%c",&c);
    a=c;
    if((a>=65)&&(a<=90))
    {
    b=a+32;
    }
    else if((a>=97&&a<=122))
    {
    b=a-32;
    }
    printf("%c",b);

}