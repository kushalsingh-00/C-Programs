/*
-------------------------------------------------------
Name         : Sum
Author       : Kushal Singh Rathore
Discription  : Sum Of Row And Column
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int sum=0;
    int a[5][5]={{8,3,9,0,10},
                 {3,5,17,1,1},
                 {2,8,6,23,1},
                 {15,7,3,2,9},
                 {6,14,2,6,0}};
    printf("Row Total\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=a[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }

    printf("\nColumn Sum\n");

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=a[j][i];
        }
        printf("%d ",sum);
        sum=0;
    }
    

}