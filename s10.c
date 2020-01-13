/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : strcat()
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    strcpy(a,"welcome to ");
    strcpy(b,"our school");
    strcat(a,b);
    strncat(b,a,1);
    printf("%s %s",a,b);
    return 0;
}