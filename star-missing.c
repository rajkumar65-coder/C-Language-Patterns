#include <stdio.h>

int main()
{
    int o, i, j, k, l, h, u;

    printf("Enter number: ");
    scanf("%d", &o);

    for (i = 1; i <= o; i++)
    {
        for (j = 1; j <= o - i; j++)
        {
            printf("  ");
        }

        for (k = 1; k <= i; k++)
        {
            printf(" *  ");
        }

        printf("\n");
    }
    for (u = o - 1; u >= 1; u--)
    {
        for (l = 1; l <= o - u; l++)
        {
            printf("  ");
        }

        for (h = 1; h <= u; h++)
        {
            printf(" *  ");
        }

        printf("\n");
    }

    return 0;
}