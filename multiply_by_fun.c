/*
-------------------------------------------------------
Name         : Multiplication
Author       : Kushal Singh Rathore
Discription  : Multiplication By Function
-------------------------------------------------------
*/

#include<stdio.h>
int mul(int a,int b)
{
    int c=a*b;
    return c;
}
int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    printf("%d",mul(a,b));
    return 0;
}