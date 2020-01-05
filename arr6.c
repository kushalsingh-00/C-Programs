/*
-------------------------------------------------------
Name         : Multidirectional Array
Author       : Kushal Singh Rathore
Discription  : Types Of Array
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};   //1d array
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};  //2d array
    int c[2][3][3]={{{1,2,3},{4,5,6},{7,8,9}},     //3d array
                    {{1,2,3},{4,5,6},{7,8,9}}  };
    
    for(int i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d ",c[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    
}