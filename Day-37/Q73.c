// Created by Aarav Choudhary on 15/09/26.
/* Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/
#include <stdio.h>

int main() {
    int r, c, i, j, mat[20][20], rowSum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter %d elements: ", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("Row sums: ");
    for (i = 0; i < r; i++) {
        rowSum = 0;
        for (j = 0; j < c; j++)
            rowSum += mat[i][j];
        printf("%d ", rowSum);
    }

    return 0;
}