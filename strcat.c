/*
-------------------------------------------------------
Name         : Catination   
Author       : Kushal Singh Rathore
Discription  : String Catination
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[20];
    char c[]=" is friend of ";
    printf("enter name of 1 person\n");
    gets(a);
    printf("enter name of 2 person\n");
    gets(b);
    printf("%s",strcat(strcat(a,c),b));
}