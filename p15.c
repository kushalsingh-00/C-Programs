/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Pointer Question
-------------------------------------------------------
*/

#include<stdio.h>
void f(int *p,int *q)
{
    p=q;        //p is now pointing to j
    *p=2;       //content of p (means j) is now 2
}
int i=0,j=1;
int main()
{
    f(&i,&j);
    printf("%d %d\n",i,j);
    return 0;
}