/*
-------------------------------------------------------
Name         : Enum 
Author       : Kushal Singh Rathore
Discription  : Enum Problem 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    enum point {y=2,x=34,t,z=0,u};
    printf("%d %d %d %d %d",t,u,x,y,z);    // aoto matically assign value
                           // to u and t which is 1+ privious
    return 0;
}