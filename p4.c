/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Mid Value Of Array By Pointer
-------------------------------------------------------
*/

#include<stdio.h>
int *findMid(int a[],int n)     //return type is pointer so datatype is pointer
{
    return &a[n/2];
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid=findMid(a,n);
    printf("%d",*mid);
    return 0;   
}