#include <stdio.h>

int main(){

    int no_rows, rows, column;

    printf("Enter no of rows you want:");
    scanf("%d", &no_rows);

    //right-top
    for(rows = 1; rows <= no_rows; rows++){
        for ( column = 0; column < rows; column++)
        {
            printf("1 ");
        }
        printf("\n");
    }

    for(rows = no_rows-1; rows >= 0; rows--){
        for ( column = 0; column < rows; column++)
        {
            printf("2 ");
        }
        printf("\n");
    }

    for(column = 1; column <= no_rows; column++){
        for ( rows = 0; rows < column; rows++)
        {
            printf("3 ");
        }
        printf("\n");
    }

    for(column = no_rows-1; column >= 0; column--){
        for ( rows = 0; rows < column; rows++)
        {
            printf("4 ");
        }
        printf("\n");
    }

    return 0;
}