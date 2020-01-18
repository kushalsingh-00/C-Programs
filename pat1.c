/*
-------------------------------------------------------
Name         : Pattern
Author       : Kushal Singh Rathore
Discription  : Concentric Square
-------------------------------------------------------
*

//let n=3
/*

33333
32223
32123
32223
33333

*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<2*n;i++)
    {
        k=n;
        if(i<=n)
        {
            for(j=1;j<2*n;j++)
            {
                printf("%d",k);
                if(i>j)
                    k=k-1;
                if(i+j>2*n)
                    k=k+1;
            }
        }
        if(i>n)
        {
            for(j=1;j<2*n;j++)
            {
                printf("%d",k);
                if(i<j)
                    k=k+1;
                if(i+j<2*n)
                    k=k-1;
            }
        }
        printf("\n");
    }
}