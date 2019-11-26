/*
-------------------------------------------------------
Name         : Sizeof() 
Author       : Kushal Singh Rathore
Discription  : Illustrating The Use Of Sizeof 
-------------------------------------------------------
*/
#include<stdio.h>
int main()
{
    int a=123;
    double d=24.5;
    float f=34.5;
    short s=45;
    long l=3434;
    unsigned int u=424;
    signed int e=42434;
    char c='d';
    printf("sizeof(int)=%d\n",sizeof(a));
    printf("sizeof(double)=%d\n",sizeof(d));
    printf("sizeof(float)=%d\n",sizeof(f));
    printf("sizeof(short)=%d\n",sizeof(s));
    printf("sizeof(long)=%ld\n",sizeof(l));
    printf("sizeof(unsigned int)=%x\n",sizeof(u));
    printf("sizeof(signed int)=%d\n",sizeof(e));
    printf("sizeof(char)=%d\n",sizeof(c));
}