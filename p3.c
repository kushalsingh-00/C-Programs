/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Min And Max Value Of Array By Pointer
-------------------------------------------------------
*/

#include<stdio.h>
void minMax(int arr[],int len,int *min,int *max)
{
    *min=*max=arr[0];
    for(int i=1;i<len;i++)
    {
        if(arr[i]<*min)
            *min=arr[i];
        if(arr[i]>*max)
            *max=arr[i];
    }
}
int main()
{
    int a[]={3,4,6,2,34,63,53,23,54,45,234};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Minimum value is: %d and Maximum value is: %d",min,max);
    return 0;

}