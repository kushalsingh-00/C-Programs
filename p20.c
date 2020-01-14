/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Function Pointer
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int res;
    int (*p)(int,int);
    p=&add;
    res=(*p)(10,20);
    printf("%d",res);
}