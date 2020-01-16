/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Structure Problem
-------------------------------------------------------
*/

#include<stdio.h>
struct abc{
    char x,y,z;
    int u;
};
int main()
{
    struct abc p={'1','0','a'+2};
    struct abc *q=&p;
    printf("%c %c %d",*(char*)q+1,*(char*)q+2,sizeof(struct abc)); //it now pointing to a element not the whole structure
    return 0;                                      //because of(char *) and print accordingly

}