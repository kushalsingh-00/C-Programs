/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Pointer Question
-------------------------------------------------------
*/

#include<stdio.h>
int f(int x,int *py,int **ppz)
{
    int y,z;
    **ppz+=1;
    z=**ppz;
    *py+=2;
    y=*py;
    x+=3;
    return x+y+z;
}
void main()
{
    int c,*b,**a;     //** means pointer to a pointer 
    c=4,b=&c,a=&b;
    printf("%d",f(c,b,a));
}