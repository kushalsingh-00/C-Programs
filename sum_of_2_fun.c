/*
-------------------------------------------------------
Name         : Sum
Author       : Kushal Singh Rathore
Discription  : Sum By Function
-------------------------------------------------------
*/

#include<stdio.h>
int add(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int a,b;
    printf("enter the values you want to add");
    scanf("%d\n%d",&a,&b);
    printf("sum is %d",add(a,b));
    return 0;
}