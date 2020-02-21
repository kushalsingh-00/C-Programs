/*
-------------------------------------------------------
Name         : Matrix
Author       : Kushal Singh Rathore
Discription  : Printing Transpose Of A Matrix 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[100][100],b,c,transpose[100][100];
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
            transpose[j][i]=a[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

}