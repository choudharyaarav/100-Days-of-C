// Created by Aarav Choudhary on 14/09/26.
/* Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/
#include <stdio.h>

int main() {
    int r, c, i, j, mat[20][20];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter %d elements: ", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    printf("Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}