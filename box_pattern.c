/*
-------------------------------------------------------
Name         : Pattern:- Box 
Author       : Kushal Singh Rathore
Discription  : Printing A Hollow Box
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i==2||i==3)
            {
                if(j==2||j==3)
                printf("  ");
                else
                printf("* ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }
}