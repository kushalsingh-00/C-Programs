/*
-------------------------------------------------------
Name         : Pointer name
Author       : Kushal Singh Rathore
Discription  : Using Name Of Array Pointers
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[5];
    *a=10;         //this represents the base address of array
    *(a+1)=20;
    printf("%d %d",a[0],a[1]);
    return 0;
}