/*
-------------------------------------------------------
Name         : Pointers
Author       : Kushal Singh Rathore
Discription  : Comaparing Pointers
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *p=&a[3];
    int *q=&a[5];
    printf("%d\n",p<=q);
    printf("%d\n",p>=q);
    q=&a[3];
    printf("%d",p==q);
    return 0;
}