/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : Strlen() 
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char *str="hello world";
    char a[]="hello world";
    char b[100]="hello world";
    printf("%d %d %d",strlen(str),strlen(a),strlen(b));
    return 0;
}