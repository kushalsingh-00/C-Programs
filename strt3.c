/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Using TypeDef
-------------------------------------------------------
*/

#include<stdio.h>
typedef struct car //Declaration Of Structure
{                 // structure are the user define datatype
    char *engine;
} car;              //with our own name or modifying datatype name
int main()
{
    car car1,car2;         //no need of writing struct car.....
    car1.engine="DDis 190 Engine";
    car2.engine="1.2 L Kappa Dual VTVT";
    printf("%s\n",car1);
    printf("%s\n",car2);
    return 0;

}