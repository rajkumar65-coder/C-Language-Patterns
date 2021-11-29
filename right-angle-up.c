#include <stdio.h>

int main() {
    
    int i, j, u;

    printf("Enter number: ");
    scanf("%d", &u);

    for ( i = 1; i <= u; i++)
    {
        for ( j = i; j <= u; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    
    return 0;
}