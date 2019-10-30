/*
-------------------------------------------------------
Name         : Coversion Of Temperature
Author       : Kushal Singh Rathore
Discription  : Conversion Of Temp --> F to C & C to F 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    float a,b;
    char c;
    printf("which type of value you wnat to change to other c or f \n");
    scanf("%c",&c);
    printf("enter the value \n");
    scanf("%f",&a);
    if('c'=='c')
    {
        b=1.8*a+32;
        printf("%f f",b);
    }
    else if('f'=='c')
    {
        b=(a-32)*5/9;
        printf("%f c",b);
    }
    else
    {
        printf("please enter values in terms of c and f");
    }
    
}