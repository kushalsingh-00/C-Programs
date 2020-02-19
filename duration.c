#include <stdio.h>

int main(){
 int s_hr,s_min, duration,hr,min;
 printf("Enter starting time in hour and minutes\n");
 scanf("%d %d",&s_hr,&s_min);
 int e_hr,e_min;
 printf("Enter finishing time in hour and minutes\n"); 
 scanf("%d %d",&e_hr,&e_min);
 if (s_hr<=e_hr)
 duration=(e_hr*60+e_min)-(s_hr*60+s_min);
 else
 duration=(12*60-s_hr*60-s_min)+(e_hr*60+e_min); 
 hr=duration/60;
 min=duration-hr*60;
 printf("%d:%d",hr,min);
 return 0;
}