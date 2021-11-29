#include <stdio.h>

int main(){

    int no_rows, rows, column;
    int ch = 64;

    printf("Enter no of rows you want:");
    scanf("%d", &no_rows);

    for(rows = 1; rows <= no_rows; rows++){
        for ( column = 0; column < rows; column++)
        {
            printf("%c ",(ch+rows));
        }
        printf("\n");
    }

    for(rows = no_rows-1; rows >= 0; rows--){
        for ( column = 0; column < rows; column++)
        {
            printf("%c ",(ch+rows));
        }
        printf("\n");
    }
    return 0;
}