/*
-------------------------------------------------------
Name         : Febonacci 
Author       : Kushal Singh Rathore
Discription  : 0 1 1 2 3 5 8 13 ........ 
-------------------------------------------------------
*/
#include<stdio.h>
int main()
{

    int a=0;
    int b=1;
    int c,d;

    printf("write the value up to which you want fibonacci");
    scanf("%d",&d);
    
    printf("%d %d ",a,b);
    for(int i=1;i<=d-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    
    }
}