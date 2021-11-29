#include <stdio.h>

int main(){

    int no_rows, rows, column;

    printf("Enter no of rows you want:");
    scanf("%d", &no_rows);

    for(rows = 0; rows <= no_rows; rows++){
        for ( column = 0; column < rows; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    
}