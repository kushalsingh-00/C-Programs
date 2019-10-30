/*
-------------------------------------------------------
Name         : Odd And Even 
Author       : Kushal Singh Rathore
Discription  : Checking The Number Is Odd Or Even 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    if(a%2==0)
    printf("%d is even",a);
    else
    printf("%d is odd",a);
}