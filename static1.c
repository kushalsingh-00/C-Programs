/*
-------------------------------------------------------
Name         : Factorial
Author       : Kushal Singh Rathore
Discription  : Finding Factorial Of Enterd Number(Loop)
-------------------------------------------------------
*/

#include<stdio.h>
static int i;     //this store in bss and 0 is treated in bss    and this transfered to data if we initilize
static int i=27;  //this store in data segment
static int i;    //ths does not affect program
int main()
{
    static int i;    //this have high preference than global because it is local
    i=5; 
    printf("%d",i);  //if we initilize it as 0 it store in bss
    return 0;
}