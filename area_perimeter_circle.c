/*
-------------------------------------------------------
Name         : Area And Perimeter Of A Circle
Author       : Kushal Singh Rathore
Discription  : Code For Area And Perimeter with #define
-------------------------------------------------------
*/

#include<stdio.h>
#include<math.h>
#define PIE 3.14               // constant
int main()
{
    float r;
    printf("Enter The Radius of a Circle\n");
    scanf("%f",&r);
    float area=PIE*pow(r,2);
    float perimeter=2*PIE*r;
    printf("Area of Circle is %f \nperimeter is %f",area,perimeter);
    
    return 0;
}