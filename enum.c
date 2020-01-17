/*
-------------------------------------------------------
Name         : Enum
Author       : Kushal Singh Rathore
Discription  : Enum Declaration And Initilization 
-------------------------------------------------------
*/

#include<stdio.h>
enum Bool{False,True,Abc};  //enum is used to asssign names to integral contant
int main()
{                      // we also create them in local scope
                      // automatically initilized
    enum Bool var;
    var=Abc;
    printf("%d",var);
    return 0;
}