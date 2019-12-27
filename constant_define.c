/*
-------------------------------------------------------
Name         : Define Keyword
Author       : Kushal Singh Rathore
Discription  : Define As PreProcessor #define As Func
-------------------------------------------------------
*/

#include<stdio.h>
#define add(x,y) x+y
int main()
{
    printf("addition of two number is %d",5*add(3,4));  //it simply replace the add(x,y) with x+y and evaluate according to rule
    return 0;   //output is 19
}