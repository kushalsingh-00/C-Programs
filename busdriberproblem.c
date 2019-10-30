/*
-------------------------------------------------------
Name         : Bus Driver 
Author       : Kushal Singh Rathore
Discription  : Bus Driver Details With Help Of Struct
-------------------------------------------------------
*/

#include<stdio.h>
struct driver
{
   char name[50];
   char dlnum[50];
   char route[50];
   int kms;
};
int main()
{
    struct driver d1,d2,d3;
    printf("enter the details of driver 1\n");
    printf("please enter the name of driver\n");
    scanf("%s",&d1.name);
    printf("please enter the dlnum\n");
    scanf("%s",&d1.dlnum);
    printf("please enter the route\n");
    scanf("%s",&d1.route);
    printf("please enter kms\n");
    scanf("%d",d1.kms);

    printf("enter the details of driver 2\n");
    printf("please enter the name of driver\n");
    scanf("%s",&d2.name);
    printf("please enter the dlnum\n");
    scanf("%s",&d2.dlnum);
    printf("please enter the route\n");
    scanf("%s",&d2.route);
    printf("please enter kms\n");
    scanf("%d",d2.kms);

    printf("enter the details of driver 3\n");
    printf("please enter the name of driver\n");
    scanf("%s",&d3.name);
    printf("please enter the dlnum\n");
    scanf("%s",&d3.dlnum);
    printf("please enter the route\n");
    scanf("%s",&d3.route);
    printf("please enter kms\n");
    scanf("%d",d3.kms);

    printf("-------details of drivers--------\n");
    printf("*********details of driver 1***********\n");
    printf("name=%s\n",d1.name);
    printf("dlnum=%s\n",d1.dlnum);
    printf("route=%s\n",d1.route);
    printf("kms=%d\n",d1.kms);

    printf("*********details of driver 2***********\n");
    printf("name=%s\n",d2.name);
    printf("dlnum=%s\n",d2.dlnum);
    printf("route=%s\n",d2.route);
    printf("kms=%d\n",d2.kms);

    printf("*********details of driver 3***********\n");
    printf("name=%s\n",d3.name);
    printf("dlnum=%s\n",d3.dlnum);
    printf("route=%s\n",d3.route);
    printf("kms=%d\n",d3.kms);


}