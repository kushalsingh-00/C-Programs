/*
-------------------------------------------------------
Name         : Sign OF A Numbet  
Author       : Kushal Singh Rathore
Discription  : Number Is In - + 0
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a;
    printf("enter a interger");
    scanf("%d",&a);
    if(a<0)
        printf("%d is a negative number",a);
    else if(a==0)
        printf("%d is zero",a);
    else if(a>0)
        printf("%d is a positive",a);
}