/*
-------------------------------------------------------
Name         : Transpose Of A Matrix
Author       : Kushal Singh Rathore
Discription  : Transpose Of A Enterd Matrix
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the value of rows & coloumns");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the array elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original matrix is \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    printf("Transpose of matrix is\n");
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[j][i]);
        }printf("\n");
    }
}