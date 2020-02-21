/*
-------------------------------------------------------
Name         : Matrix
Author       : Kushal Singh Rathore
Discription  : Printing A Matrix 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[100][100],b,c;
    printf("Enter the no of rows and column\n");
    scanf("%d %d",&b,&c);
    printf("Enter the elements\n");

    for(int i=0;i<b;i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int i=0;i<b;i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[i][j]);
        } 
        printf("\n");     
    }
}