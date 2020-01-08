/*
-------------------------------------------------------
Name         : Pointers Arithmatic
Author       : Kushal Singh Rathore
Discription  : Arithmatic Operations
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int *ptr=&a[4];
    printf("%d ",ptr);
    ptr=ptr+1;                  //add in terms of bytes like 1*bytes of integer
    printf("%d ",ptr);
    printf("%d ",*ptr);
    
    ptr-=2;                    //subtract in terms of bytes
    printf("%d ",ptr);
    printf("%d ",*ptr);
    
    int *ptr1=&a[6];
    int ab=ptr1-ptr;         // it shows the gaps between two pointers
    printf("%d ",ab);


    return 0;

}