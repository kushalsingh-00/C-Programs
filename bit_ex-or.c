/*
-------------------------------------------------------
Name         : Bitwise Operator 
Author       : Kushal Singh Rathore
Discription  : Bitwise Ex-Or Operator  
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a=4,b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After XOR, a=%d and b=%d",a,b);    // a=3,b=4
    return 0;
}