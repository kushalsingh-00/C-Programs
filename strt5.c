/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Designeted Initilizers
-------------------------------------------------------
*/

#include<stdio.h>
struct abc{
    int x;
    int y;
    int z;
};
int main()
{
    struct abc a={.y=4,.x=3,.z=1};   
    printf("%d %d %d",a.x,a.y,a.z);
    return 0;
}