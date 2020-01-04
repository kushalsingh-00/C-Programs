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
    int arr[10]={[0]=1,[5]=2,[4]=33};  // 0,5,4 are designators
    int a[]={1,7,4,[2]=90,6,[8]=9};    // higher value will be the size n+1
    for(int i=0;i<10;i++)    //if designator and index have same value then designator will taken
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}