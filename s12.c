/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : String Problem
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="Gate2019";
    char *p=c;  //store the address of first char
    printf("%s",p+p[3]-p[1]);  //p is replaced by address and p[3] and p[1] are by their content
    return 0;
}