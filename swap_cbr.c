/*
-------------------------------------------------------
Name         : Swapping
Author       : Kushal Singh Rathore
Discription  : Swapping Call By Refrence
-------------------------------------------------------
*/

#include<stdio.h>
int swap_c_b_r(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d\n%d",&a,&b);
    printf("%d",&a);
    int *c=&a;
    printf("%d",*c);
    printf("a=%d  b=%d\n",a,b);
    swap_c_b_r(&a,&b);
    printf("a=%d  b=%d",a,b);
    return 0;
}