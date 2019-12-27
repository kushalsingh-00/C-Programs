/*
-------------------------------------------------------
Name         : Auto Keyword
Author       : Kushal Singh Rathore
Discription  : Use Of Auto Keyword 
-------------------------------------------------------
*/

#include<stdio.h>
char var;
int main()
{
    auto int var;             //auto keyword used to automatic delete variable storage after use(automatic declaration)
    printf("%d",var);         //by default it have 0 if we do not initilize       
    return 0;
}