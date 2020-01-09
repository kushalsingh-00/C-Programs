/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Printing 2D Array By pointer
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[2][2]={1,2,3,4};
    int *p;
    for(p=&a[0][0];p<=&a[1][1];p++)  // by single for loop we print 2d array
        printf("%d",*p);
        return 0;
}