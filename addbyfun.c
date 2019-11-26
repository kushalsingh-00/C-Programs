/*
-------------------------------------------------------
Name         : Add By Function
Author       : Kushal Singh Rathore
Discription  : Using Function Add 10 BY Passing Address
-------------------------------------------------------
*/

#include<stdio.h>
int add(int *a)
{
    *a=*a+10;
    printf("after called=%d\n",*a);
}
int main()
{
    int num=5;
    printf("before calling=%d\n",num);
    add(&num);
    printf("after calling=%d\n",num);

}