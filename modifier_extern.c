/*
-------------------------------------------------------
Name         : Extern Keyword
Author       : Kushal Singh Rathore
Discription  : Code Illustrating The Use Of Extern Keyword
-------------------------------------------------------
*/

#include<stdio.h>
int a=9;
int main()
{
    extern int a;        // this is used to only declare variable 
    printf("%d",a);      
    return 0;
}