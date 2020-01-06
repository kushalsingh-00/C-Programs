/*
-------------------------------------------------------
Name         : Matrix
Author       : Kushal Singh Rathore
Discription  : Matrix Multiplication
-------------------------------------------------------
*/

#include<stdio.h>
#define M 50
int main()
{
    int a[M][M],b[M][M],product[M][M];
    int arows,acolumns,brows,bcolumns;
    int sum=0;
    printf("Enter the rows and column of matrix a: ");
    scanf("%d %d",&arows,&acolumns);

    printf("Enter the elements of matrix a:\n");
    for(int i=0;i<arows;i++)
    {
        for(int j=0;j<acolumns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and column of matrix b: ");
    scanf("%d %d",brows,&bcolumns);

    if(brows!=acolumns)
    {
        printf("Sorry!");
    }  
    else
    {
        printf("Please Enter the elements of matrix b: \n");
        for(int i=0;i<brows;i++)
        {
            for(int j=0;j<bcolumns;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("\n");
    for(int i=0;i<arows;i++)
    {
        for(int j=0;j<brows;j++)
        {
            for(int k=0;k<brows;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }

    printf("Resultant matrix\n");
    for(int i=0;i<arows;i++)
    {
        for(int j=0;j<bcolumns;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}