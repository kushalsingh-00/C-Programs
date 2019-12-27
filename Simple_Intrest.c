/*
-------------------------------------------------------
Name         : Simple Intrest
Author       : Kushal Singh Rathore
Discription  : Code For FInding Simple Intrest
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int final;
    int p;
    int r;
    int t;
    printf("Enter the value of principle, Intrest rate, Time");
    scanf("%d\n%d\n%d",&p,&r,&t);
    final=(p*r*t)/100;
    printf("Your Final AMmount Is %d",final);
}