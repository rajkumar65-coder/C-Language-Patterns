#include <stdio.h>

int main()
{
    int o, i, j, k, l;

    printf("Enter any number: ");
    scanf("%d", &o);

    for (i = 1;i <=o; i++)
    {
        for ( j = 1; j <= o; j++)
        {
            printf("* ");
        }

        for ( k = 1; k <= o; k++)
        {
            printf("4 ");
        }
        
        printf("\n");
    }
    return 0;
}