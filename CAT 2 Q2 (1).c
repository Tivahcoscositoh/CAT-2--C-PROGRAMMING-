/*
AUTHOR:TIVAH JEPKOSGEI 
REG NO:CT101/G/23447/24
DATE:7/11/24
*/
#include <stdio.h>

int main() {
    // Define an array data structure
    int scores [2][2];
    int i,j;

    // Declare and initialize a 2D array named scores
    scores[0][0] = 65;
    scores[0][1] = 92;
    scores[1][0] = 84;
    scores[1][1] = 72;
// Print the elements of the array using a nested for loop
    for (i = 0; i <2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");   
    }
    scores[0][0] = 35;
    scores[0][1] = 70;
    scores[1][0] = 59;
    scores[1][1] = 67;

    // Print the elements of the array using a nested for loop
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
         printf("\n");
    }
	return 0;
 
}

