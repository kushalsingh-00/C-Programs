/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : String Problem
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
void foo(char *a)
{
    if(*a&&*a!=' ')
    {
        foo(a+1);
        putchar(*a);
    }
}
int main()
{
    char a[100];
    gets(a);
    foo(a);
}