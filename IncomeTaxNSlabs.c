#include<stdio.h>
int main()
{
    int no_of_slabs;
    int U_limits[100];  //for taking the lower limit of each slab
    int L_limits[100];  //for taking the upper limit of each slab
    int tax[100];
    int tax_cal[100];
    int c_tax[100];
    int add_tax=0;
    int salary;
    int slab,actual_tax=0;
    printf("Enter the no of slabs\n");
    scanf("%d",&no_of_slabs);
    printf("Enter the Lower and Upper limit of each slabs\n");
    for(int i=0;i<no_of_slabs;i++)
    {
        printf("Enter the Lower and Upper Limit of slab %d\n",i+1);
        printf("Lower Limit:");
        scanf("%d",&L_limits[i]);         
        printf("Upper Limit:");
        scanf("%d",&U_limits[i]);     
        printf("Enter the tax for slab no %d:",i+1);
        scanf("%d",&tax[i]);
    } 

    //for calculation of tax according value enterd by user

    for(int i=0;i<no_of_slabs;i++)
    {
        
        tax_cal[i]=(tax[i]/100.0)*(U_limits[i]-L_limits[i]);
        add_tax=add_tax+tax_cal[i];
        c_tax[i]=add_tax;
    }

    //taking input of salary
    printf("Enter the salary");
    scanf("%d",&salary);
    
    // finding the slab number in which salary exist
    for(int i=0;i<no_of_slabs;i++)
    {
      if(salary>L_limits[i]&&salary<U_limits[i])
      {
        slab=i;
        break;
      }
    
    }
    
    //calculation of tax 
    actual_tax=c_tax[slab-1]+(tax[slab]/100.0*(salary-L_limits[slab]));
    printf("%d",actual_tax);
}