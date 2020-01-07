/*
-------------------------------------------------------
Name         : Array
Author       : Kushal Singh Rathore
Discription  : Finding Max And Min
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int min,max;
    int a[]={2,4,11,5,0};
    min=max=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    printf("%d %d",min,max);
    return 0;
}