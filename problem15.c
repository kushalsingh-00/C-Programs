/*
-------------------------------------------------------
Name         : Problem 15
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/
//how many times * printed 
#include<stdio.h>
void fun(int n)
{
    int i=0;
    if(n>1)
        fun(n-1);
    for(i=0;i<n;i++)
        printf(" * ");
}

int main()
{
    fun(4); 
    return 0;                  //n(n+1)/2
}