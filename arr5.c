/*
-------------------------------------------------------
Name         : Count Aray Element
Author       : Kushal Singh Rathore
Discription  : Counting Using SizeOf()
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[]={2,3,4,5,6,7,5,42,2,4,5,45,34,55,64,23,54,4,3,2,46,78,3,45,64,34,3};
    printf("%d",sizeof(a)/sizeof(a[0]));
    return 0;
}
