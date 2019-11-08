/*
5       1
  4   2 
    3
  2   4 
1       5
*/

// 12 8 4 0 4 8 12

#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    {
     if((i==j) && (i<4))
     {
      printf("%d",6-j);
     }
     else if((i==j) && (i>=4))
     {
      printf("%d",j);
     }
     else if((j==6-i)&&(i<4))
     {
       printf("%d",i);
     }
     else if((j==6-i)&&(i>=4))
     {
       printf("%d",j);
     }
     else{
       printf(" ");
     }
    }printf("\n");}
}