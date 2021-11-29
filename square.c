#include <stdio.h>

int main() {
    
    int i, j, l;

    printf("Enter number: ");
    scanf("%d", &l);

    for ( i = l; i >= 1; i--)
    {
        for ( j = l; j >= 1; j--)
        {
            printf("1 ");
        }
        printf("\n");
    }
    
    return 0;
}