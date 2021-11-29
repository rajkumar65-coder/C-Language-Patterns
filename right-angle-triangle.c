#include <stdio.h>

int main() {
    
    int i, j, u;

    printf("Enter number: ");
    scanf("%d", &u);

    for ( i = u; i >= 1; i--)
    {
        for ( j = u; j >= i; j--)
        {
            printf("1 ");
        }
        printf("\n");
    }
    
    return 0;
}