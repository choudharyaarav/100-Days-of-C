// Created by Aarav Choudhary on 16/09/26.
/* Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/
#include <stdio.h>

int main() {
    int n, dummy, i, j, mat[20][20], symmetric = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &dummy);

    printf("Enter %d elements: ", n * n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i])
                symmetric = 0;
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}