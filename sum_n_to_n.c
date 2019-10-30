/*
-------------------------------------------------------
Name         : Sum  
Author       : Kushal Singh Rathore
Discription  : Finding Sum From N To N
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("please enter the number to get sum from m to n ");
    scanf("%d\n%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}