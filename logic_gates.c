/*
-------------------------------------------------------
Name         : Logic Gates 
Author       : Kushal Singh Rathore
Discription  : Verifying The Gates 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("%d",d);
    printf("enter the value of a and b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b)&&(a>c);
    e=(a>b)||(b>c);
    f=!(c>a)&&(b>a);
    printf("%d",d);
    printf("%d",e);
    printf("%d1",f);

}