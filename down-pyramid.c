#include <stdio.h>

int main()
{
    int u, o, l, h, i;

    printf("Enter number: ");
    scanf("%d", &o);

    for (u = o; u >= 1; u--)
    {
        for (l = u; l <= o ; l++)
        {
            printf("  ");
        }

        for (h = 1; h <= u; h++)
        {
            printf("* ");
        }

        for (i = 1; i <= u - 1; i++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
