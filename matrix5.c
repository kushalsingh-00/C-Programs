/*
-------------------------------------------------------
Name         : Matrix
Author       : Kushal Singh Rathore
Discription  : Sum Of Upper & Lower Triangle 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[100][100],b,c,sum_upper=0,sum_lower=0;
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
            if(i<j)
                sum_upper+=a[i][j];
            else if(i>j)
                sum_lower+=a[i][j];
        }
    }
    printf("sum of upper and lower triangle is\n%d\n%d",sum_upper,sum_lower);
}
