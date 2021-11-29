/*
Fibonacci series using for loop
*/

#include <stdio.h>

int main() {

    int temp1 = 0, temp2 = 1, temp3, i, number;

    printf("Enter the number of elements you want: ");
    scanf("%d", &number);

    for ( i = 0; temp1 <= number; i++)
    {
        printf(" %d,", temp1);
        temp3 = temp1 + temp2;
        temp1 = temp2;
        temp2 = temp3;
        
    }

    return 0;
    
}