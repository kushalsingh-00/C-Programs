/*
-------------------------------------------------------
Name         : Problem 11
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/
#include<stdio.h>
int fun(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num >>=1;
    }
    return count;
}
int main()
{
    int a=fun(435);
    printf("%d",a);
    return 0;
}