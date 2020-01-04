/*
-------------------------------------------------------
Name         : Reverse
Author       : Kushal Singh Rathore
Discription  : Reversing A series By array
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[9]={34,56,54,32,67,89,90,32,21};
    for(int i=8;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}