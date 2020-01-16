/*
-------------------------------------------------------
Name         : Union
Author       : Kushal Singh Rathore
Discription  : Array Of Mixed Type
-------------------------------------------------------
*/

#include<stdio.h>
typedef union {
    int a;
    char b;
    double c;
}data;
int main()
{
    data arr[10];
    arr[0].a=10;
    arr[1].b='a';
    arr[2].c=10.178;
    printf("%d",arr[0]);
    return 0;
}