// Created by Aarav Choudhary on 14/09/26.
/* Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/
#include <stdio.h>

int main() {
    int r, c, i, j, mat[20][20], sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter %d elements: ", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum += mat[i][j];

    printf("Sum = %d", sum);

    return 0;
}