/*
-------------------------------------------------------
Name         : String Literals
Author       : Kushal Singh Rathore
Discription  : Operations On String Literals
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    char *p="hello";     //string literal is treated as pointer to the first character
   // *p='m';      // we cannot change the value as string literal are string constant(read only memory)
    printf("%c\n",*p); //example
    printf("%c\n",*(p+1));  //example 
    printf("%s",p);


    return 0;
}