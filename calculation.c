/*
-------------------------------------------------------
Name         : Simple Calculator
Author       : Kushal Singh Rathore
Discription  : Some Arithmatic Calculation
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a,b,sum,sub,mul,div,rem;
    printf("enter values of a and b \n");
    scanf("%d \n %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf(" sum= %d \n sub= %d \n mul= %d \n div= %d \n rem= %d ",sum,sub,mul,div,rem);
}