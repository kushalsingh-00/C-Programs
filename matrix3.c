/*
-------------------------------------------------------
Name         : Matrix
Author       : Kushal Singh Rathore
Discription  : Printing Multiplication Of Matrix 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a1[100][100],a2[100][100],b,c,d,e,f;
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
    printf("Enter the no of rows and column\n");
    scanf("%d %d",&d,&e);
    if(c==d)
    {
        printf("Enter the elements of 2nd matrix\n");
        for(int i=0;i<d;i++)
        {
            for (int j = 0; j < e; j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        for(int i=0;i<b;i++)
        {
            for (int j = 0; j < c; j++)
            {
                for(int k=0;k<d;k++)
                {
                    f=f+a1[i][k]*a2[k][j];
                }
                printf("%d ",f);
                f=0;
            }
            printf("\n");     
        }
    }
    else
    printf("enetr the correct value of row and column");
}