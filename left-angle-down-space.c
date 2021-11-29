#include <stdio.h>

int main()
{
    int o, i, j, space;

    printf("Enter number: ");
    scanf("%d", &o);

    for (i = 0; i <= o; i++)
    {
        for (space = 0; space <= (o - i); space++)
        {
            printf("  ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}