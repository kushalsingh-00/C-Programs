/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : Different Types Of Printing Func
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    char *p="hello world";
    printf("%.5s\n",p);   //for first n char
    printf("%6.5s\n",p);  //m is for creating a m number and displayed from right hand side
    puts(p);    //method for printing strings 
    puts(p);    //add new line after printing
    return 0;
}