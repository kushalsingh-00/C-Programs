#include<stdio.h>
int main()
{
    int no_of_slabs;
    int limits[100][2];
    int tax[100];
    int salary,n,found=0,index;
    printf("Enter the no of slabs\n");
    scanf("%d",&no_of_slabs);
    printf("Enter the slabs limit\n");
    for(int i=0;i<no_of_slabs;i++)
    {
        printf("Enter the limit of slab number %d:",i+1);
        for(int j=0;j<2;j++)
        {
            scanf("%d",&limits[i][j]);
        }
        printf("Enter the tax for slab no %d:",i+1);
        scanf("%d",&tax[i]);
    }

    printf("slab are as follows\n");
    for(int i=0;i<no_of_slabs;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d-",limits[i][j]);
        }
        printf(" %d\n",tax[i]);
    }

    printf("Enter the salary:");
    scanf("%d",&salary);

    for(int i=salary;i>0;i--)
    {
        for(int j=0;j<no_of_slabs;j++)
        {
            for(int k=0;k<2;k++)
            {
                if(limits[j][k]==i)
                {
                    n=i;
                    found=1;
                    break;
                }
            }
            if(found==1)
            break;
        }
        if(found==1)
        break;
    }

    for(int i=0;i<no_of_slabs;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(limits[i][j]==n)
            {
            index=i;
            break;
            }
        }
    }


}