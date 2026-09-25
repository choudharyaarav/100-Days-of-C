// Created by Aarav Choudhary on 17/09/26.
/* Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/
#include <stdio.h>

int main() {
    int n, dummy, i, j, mat[20][20], sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &dummy);

    printf("Enter %d elements: ", n * n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
        sum += mat[i][i];

    printf("Diagonal sum = %d", sum);

    return 0;
}