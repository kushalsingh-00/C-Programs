/*
-------------------------------------------------------
Name         : Bitwise Operator 
Author       : Kushal Singh Rathore
Discription  : Bitwise Operator  
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("please enter the value of a and b so that we perform operation on a and b\n");
    scanf("%d\n%d",&a,&b);
    printf("and %d&%d=%d\n",a,b,a&b);
    printf("or %d|%d=%d\n",a,b,a|b);
    printf("nor %d^%d=%d\n",a,b,a^b);
    printf("left shift %d<<1=%d   %d<<1=%d\n",a,a<<1,b,b<<1);
    printf("right shift %d>>1=%d   %d>>1=%d\n",a,a>>1,b,b>>1);

}