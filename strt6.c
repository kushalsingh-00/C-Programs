/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Array In Structure
-------------------------------------------------------
*/

#include<stdio.h>
struct car{
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};
int main()
{
    struct car c[3];
    int i=1;
    for(i;i<=3;i++)
    {
        printf("Enter the detail of car %d: \n",i);
        printf("Enter the car %d fuel tank capacity: ",i);
        scanf("%d",&c[i].fuel_tank_cap);
        printf("Enter the car %d seating capacity: ",i);
        scanf("%d",&c[i].seating_cap);
        printf("Enter the car %d mileage: ",i);
        scanf("%f",&c[i].city_mileage);
    }
    printf("\n");
    for(i=1;i<=3;i++)
    {
        printf("Detail of car %d",i);
        printf("Car %d fuel tank capacity: %d\n",i,c[i].fuel_tank_cap);
        printf("Car %d seating capacity: %d\n",i,c[i].seating_cap);
        printf("Car %d mileage: %f\n",i,c[i].city_mileage);    
    }
    return 0;
}