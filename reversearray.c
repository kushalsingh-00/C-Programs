/*
-------------------------------------------------------
Name         : Reverse The Arry 
Author       : Kushal Singh Rathore
Discription  : This Reverse The Given Array 
-------------------------------------------------------
*/

#include<stdio.h>
void abc(int* ptr)
{
    for(int i=7;i>=0;i--)
    {
        printf("%d ",ptr[i]);
    
    }
    printf("\n");
    return;
}
int main()
{
    int a[]={1,2,3,4,5};
    printf("array before reversal\n");
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    abc(a);
    return 0;

}