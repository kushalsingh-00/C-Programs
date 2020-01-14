/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : STring Problem
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char p[20];
    char *s="string";
    int l=strlen(s);
    for(int i=0;i<l;i++)
        p[i]=s[l-i];
    printf("%s",p);
    return 0;
}