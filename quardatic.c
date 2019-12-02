/*
-------------------------------------------------------
Name         : Quardatic
Author       : Kushal Singh Rathore
Discription  : Finding The Solutions Of Quardatic Eq
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the coefficient of x^2 and x and constant term");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d>0)
    {
        printf("Real and distinct roots exist & are %f and %f",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
    }
    else if(d==0)
    {
        printf("Roots are real & equal and are %f & %f",(-b)/2*a,(-b)/2*a);
    }
    else
    {
        printf("Roots are imaginary");
    }
    
