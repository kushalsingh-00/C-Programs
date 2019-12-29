/*
-------------------------------------------------------
Name         : Problem 3
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int arr[]={10,50};
    int*p=&arr[1];
    p[0]++;
    printf("%d",*p);
}