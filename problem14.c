/*
-------------------------------------------------------
Name         : Problem 14
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/
//how many times get() called
#include<stdio.h>
void get(int n)
{
    if(n<1)
    return;
    get(n-1);
    get(n-3);
    printf("%d",n);
}
int main()
{
    grt(6);
    return 0;            //25 times
}