/*
-------------------------------------------------------
Name         : Swapping
Author       : Kushal Singh Rathore
Discription  : Swapping Call By Value
-------------------------------------------------------
*/

#include<stdio.h>
int swap_c_b_v(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("in function a=%d,b=%d\n",a,b);
}
int main()
{
    int a=3,b=8;
    printf("in main a=%d,b=%d\n",a,b);
    swap_c_b_v(a,b);
    printf("in main a=%d,b=%d\n",a,b);
}