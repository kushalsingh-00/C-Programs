/*
-------------------------------------------------------
Name         : Problem 17
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/
//return value of fun(5)
#include<stdio.h>
int fun(int n)
{
    int x=1,k;
    if(n==1) return x;
    for(k=1;k<n;++k)
        x=x+fun(x)*fun(n-k);
    return x;
}
int main()
{
    int a=fun(5);
    printf("%d",a);
    return 0;
}