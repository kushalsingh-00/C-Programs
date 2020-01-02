/*
-------------------------------------------------------
Name         : Problem 10
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return 1+fun(n-1);
}
int main()
{
    int n=3;
    printf("%d ",fun(n));
}