/*
-------------------------------------------------------
Name         : Greatest Common Divisor
Author       : Kushal Singh Rathore
Discription  : Find GCD By Recursion
-------------------------------------------------------
*/

#include<stdio.h>
int gcd(int x,int y)
{
    int r;
    r=x%y;
    if(r==0)
    return y;
    else
    return(gcd(y,r));
}
int main()
{
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d\n%d",&a,&b);
    printf("gcd of %d and %d is %d",gcd(a,b));
}