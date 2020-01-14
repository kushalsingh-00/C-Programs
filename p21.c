/*
-------------------------------------------------------
Name         : Pointer 
Author       : Kushal Singh Rathore
Discription  : Application Of Function Pointer
-------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
#define A 4
float sum(float a,float b) {return a+b;}
float sub(float a,float b) {return a-b;}
float mul(float a,float b) {return a*b;}
float div(float a,float b) {return a/b;}

int main()
{
    float (*p[A])(float,float)={sum,sub,mul,div};
    int choice;
    float a,b;
    printf("Enter your choice:\n0 for sum\n1 for sub\n2 for mul\n3 for div\n");
    scanf("%d",&choice);
    printf("Enter number\n");
    scanf("%f %f",&a,&b);
    printf("%f",p[choice](a,b));
    return 0;
}