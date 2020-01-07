/*
-------------------------------------------------------
Name         : Pointer Problem
Author       : Kushal Singh Rathore
Discription  : Prooblem Related TO Assignment
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i=1;
    int *p=&i,*q;
    q=p;
    *q=5;
    printf("%d",*p);
}