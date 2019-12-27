/*
-------------------------------------------------------
Name         : Define Keyword
Author       : Kushal Singh Rathore
Discription  : Define As PreProcessor #define As Func
-------------------------------------------------------
*/

#include<stdio.h>
#define greater(x,y) if(x>y) \
                        printf("%d is greater",x); \
                     else \
                        printf("%d is greater",y);

int main()
{
    greater(4,5);
    return 0;
}