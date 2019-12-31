/*
-------------------------------------------------------
Name         : Problem 6
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i=1024;
    for(; i;i>>=1)                 //0 is traeted as false in this condition
    {
        printf("Hello, World!");
    }
    return 0;
}