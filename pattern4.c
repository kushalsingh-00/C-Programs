#include <stdio.h>
int main()
{
    int n, k = 0;
    printf("Enter the value of n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i % 2 != 0 && j != 2)
                printf("%d ", ++k);
            else if (i % 2 != 0 && j == 2)
                printf("  ");
            else if (i % 2 == 0 && j == 2)
                printf("%d ", ++k);
            else if (i % 2 == 0 && j != 2)
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}