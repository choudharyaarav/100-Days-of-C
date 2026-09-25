// Created by Aarav Choudhary on 16/09/26.
/* Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, mat1[20][20], mat2[20][20];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter %d elements: ", r1 * c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter %d elements: ", r2 * c2);
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    printf("Sum matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            printf("%d ", mat1[i][j] + mat2[i][j]);
        printf("\n");
    }

    return 0;
}