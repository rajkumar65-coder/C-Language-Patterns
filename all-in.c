#include <stdio.h>

int main()
{
    int o, i, k, l, u;

    printf("Enter number of rows: ");
    scanf("%d", &o);

    l = o - 1;

    for (k = 1; k <= o; k++)
    {
    // for spacing in left side
        for (i = 1; i <= l; i++)
        {
            printf("  ");
        }

        l--;

        // upper pyramid
        for (i = 1; i <= 2 * k - 1; i++)

            printf("* ");

        printf("\n");
    }

    l = 1;

    for (k = 1; k <= o - 1; k++)
    {
        // for spacing in bottom left side
        for (i = 1; i <= l; i++)
        {
            printf("  ");
        }

        l++;

        // whole bottom pyramid
        for (i = 1; i <= 2 * (o - k) - 1; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}