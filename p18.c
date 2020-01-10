/*
-------------------------------------------------------
Name         : Pointer
Author       : Kushal Singh Rathore
Discription  : Pointer Question
-------------------------------------------------------
*/

#include<stdio.h>
void swap(int *x,int *y)
{
    static int *temp;
    temp=x;             
    x=y;
    y=temp;
}
void printab()
{
    static int i=1, a=-3,b=-6;
    i=0;
    while(i<=4)
    {
        if((i++)%2==0) continue;
        a=a+i;
        b=b+i;
    }
    swap(&a,&b);                 //swap function only exchange address not value so no role
    printf("a=%d, b=%d ",a,b);

}

int main()
{
    printab();
    printab();

}