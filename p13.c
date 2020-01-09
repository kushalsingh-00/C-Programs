/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Multi Direction array
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[2][2][2]={1,2,3,4,5,6,7,8};
    printf("%d ",***a);  
    printf("%d ",**(*(a+1)+1));     //this access 2nd last element of array
    return 0;
}