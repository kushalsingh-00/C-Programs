/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Reverse Elements Of Array By Pointer
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[5], *p;
    printf("Enter rhe value of array:");
    for(p=a;p<=a+4;p++)
        scanf("%d",p);

    printf("Elements in reverse order is:\n");
    for(p=a+4;p>=a;p--)
        printf("%d ",*p);
    return 0;
    
}