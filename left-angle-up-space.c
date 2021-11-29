#include <stdio.h>

int main()
{
    int i, j, k, l;

    printf("Enter number: ");
    scanf("%d", &l);

    for (i = 1; i <= l; i++)
    {
        for (j = i; j <= l; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
        
    }

    return 0;
}
