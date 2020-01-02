/*
-------------------------------------------------------
Name         : Recursion
Author       : Kushal Singh Rathore
Discription  : Indirect Recursion 
-------------------------------------------------------
*/
// add 1 if number is odd and subtract if number is even for 1 to 10
#include<stdio.h>
void odd();
void even();
int n=1;
void odd()
{
    if(n<=10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
    return;
}
void even()
{
    if(n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
    return;
}
int main()
{
    odd();
}