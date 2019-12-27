/*
-------------------------------------------------------
Name         : Static Keyword
Author       : Kushal Singh Rathore
Discription  : Using Of Static Keyword
-------------------------------------------------------
*/


#include<stdio.h>
int increment()
{
    static int count;          // it also restrict using a variable in other file
    count=count+1;
    return count;
}
int main()
{
    int value;
    value=increment();
    value=increment();
    printf("%d",value);    //2 if static not there ans is 1 because static 
}