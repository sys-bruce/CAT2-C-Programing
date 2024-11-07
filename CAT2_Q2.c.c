//Programm to define an array data structure
/*
application to declare an initialize a 2D array named scores with 2rows and 2 columns 
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:24/09/2024
*/

#include <stdio.h>

int main() {
    // Create and initialize a 2D array with values
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    // Display the elements with a nested for loop
    int i,j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}