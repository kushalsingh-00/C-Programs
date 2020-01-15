/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Declaration
-------------------------------------------------------
*/

#include<stdio.h>

struct  //Declaration Of Structure
{                 // structure are the user define datatype
    char *engine;
} car1,car2;
int main()
{
    car1.engine="DDis 190 Engine";
    car2.engine="1.2 L Kappa Dual VTVT";
    printf("%s\n",car1);
    printf("%s\n",car2);
    return 0;

}