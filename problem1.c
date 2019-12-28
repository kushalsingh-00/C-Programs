/*
-------------------------------------------------------
Name         : Problem 1
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a=1;
    int b=1;
    int c=++a||b++;
    int d=b--&&--a;
    printf("%d %d %d %d",a,b,c,d);   // 1 0 1 1 
}