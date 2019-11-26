/*
-------------------------------------------------------
Name         : Greatest Common Divisor
Author       : Kushal Singh Rathore
Discription  : Finding GCD Of Two Number 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a,b,gcd;
    printf("Enter the value of a and b");
    scanf("%d\n%d",&a,&b);
    for(int i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    printf("gcd of %d and %d is %d",a,b,gcd);
    return 0;
}