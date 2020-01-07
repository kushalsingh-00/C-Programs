/*
-------------------------------------------------------
Name         : Pointers
Author       : Kushal Singh Rathore
Discription  : Assignment Of Pointers
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i=10,j=20;
    int *p,*q;
    p=&i;
    q=&j;
    q=p;
    printf("%d %d",*p,*q);
    return 0;
}