/*
-------------------------------------------------------
Name         : Area And Perimeter Of A Square
Author       : Kushal Singh Rathore
Discription  : Code For Area And Perimeter
-------------------------------------------------------
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a;
    printf("Enter The Side of a Square\n");
    scanf("%f",&a);
    float area=pow(a,2);
    float perimeter=4*a;
    printf("Area of Square is %f \nperimeter is %f",area,perimeter);
    
    return 0;
}