/*
-------------------------------------------------------
Name         : Array 
Author       : Kushal Singh Rathore
Discription  : Inserting Values And Printing
-------------------------------------------------------
*/

#include<stdio.h>
#define N 15

int main()
{
    int a[N], i;
    for(i=0;i<N;i++)
    {
        printf("Enter The Input For Index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("Array Have Elements As Follows\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}