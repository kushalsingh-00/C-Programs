/*
-------------------------------------------------------
Name         : Problem 2
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i=5;
    int var=sizeof(i++);  //value not increase due to compiler
    printf("%d %d",i,var);
    return 0;
}
