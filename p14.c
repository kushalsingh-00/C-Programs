/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Pointer To An Entire Array
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[][3]={1,2,3,4,5,6};
    int (*ptr)[3]=a;
    printf("%d %d ",(*ptr)[1],(*ptr)[2]);  //(*ptr)[1]=*((*ptr)+1)
    ++ptr;             //pointer to the 2nd 1d array                     
    printf("%d %d ",(*ptr)[1],(*ptr)[2]);  
    return 0;


}