/*
-------------------------------------------------------
Name         : Matrix
Author       : Kushal Singh Rathore
Discription  : Printing A Sum Of Two Matrix 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a1[100][100],a2[100][100],b,c;
    printf("Enter the no of rows and column\n");
    scanf("%d %d",&b,&c);
    printf("Enter the elements of 1st matrix\n");

    for(int i=0;i<b;i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<b;i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(int i=0;i<b;i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a1[i][j]+a2[i][j]);
        } 
        printf("\n");     
    }
}