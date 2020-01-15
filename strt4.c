/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Using TypeDef
-------------------------------------------------------
*/

#include<stdio.h>
struct car{
    char engine[50];
    char fuel_typr[10];
    int fuel_cap;
    int seating_cap;
    float city_mileage;
};

int main()
{
    struct car c1={"DDis 90 Engine","Diesel",37,5,19.4};
    struct car c2={"kappa","Petrol",22,8,14.5};
    printf("%s %f",c1.engine,c1.city_mileage);
    return 0;
}