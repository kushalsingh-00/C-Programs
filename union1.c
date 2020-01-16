/*
-------------------------------------------------------
Name         : Union 
Author       : Kushal Singh Rathore
Discription  : Union Declaration,Initilization,Pointer
-------------------------------------------------------
*/

#include<stdio.h>
union abc{                   //union is same as structure but share same memory
    char x;                  // char and int have same memory address
    int u;
};
int main()
{
    union abc p={.u=65};
    union abc *q=&p;
    printf("%c %d",q->x,q->u);
    return 0;

}