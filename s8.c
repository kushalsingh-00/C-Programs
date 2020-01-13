/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : STring Library And Function
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="Hello";
    char str2[10];
    char str3[3];
    printf("%s\n",strcpy(str2,str1)); 
    strncpy(str3,str1,sizeof(str3));
    str2[sizeof(str3)-1]='\0';
    printf("%s\n",str3);
    return 0;
}