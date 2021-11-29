#include <stdio.h>

int main(){

    int no_rows, rows, column;

    printf("Enter no of rows you want:");
    scanf("%d", &no_rows);

    for(rows = no_rows; rows >= 1; rows--){
        for ( column = 0; column < rows; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}