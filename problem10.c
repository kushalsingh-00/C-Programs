/*
-------------------------------------------------------
Name         : Problem 10
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int fun()
{
    static int num=16;
    return num--;
}
int main()
{
    for(fun();fun();fun())
    {
        printf("%d ",fun());
       
    }
    return 0;
}