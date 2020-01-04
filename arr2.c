/*
-------------------------------------------------------
Name         : Designeted Initilization
Author       : Kushal Singh Rathore
Discription  : Put Values At Random Places
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int arr[10]={[0]=1,[5]=2,[4]=33};
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}