/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Pointer To Structure Variable
-------------------------------------------------------
*/

#include<stdio.h>

struct abc{
    int x,y;
};
int main()
{
    struct abc a={1,8};
    struct abc *ptr=&a;
    printf("%d %d",ptr->x,ptr->y);  //it may also be written as  (*ptr).x= (*&a).x
    return 0;
    
}