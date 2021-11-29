#include <stdio.h>

int main()
{
    int i, j, k, l, m, t;

    printf("Enter number: ");
    scanf("%d", &l);

    for (i = 0; i <= l - 1; i++)
    {
        for (j = i; j <= l; j++)
        {
            printf("  ");
        }

        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }

        for (t = 1; t <= k; t++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}