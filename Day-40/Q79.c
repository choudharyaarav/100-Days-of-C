// Created by Aarav Choudhary on 18/09/26.
/* Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

int main() {
    int r, c, i, j, mat[20][20], row, col, dir, count, total;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter %d elements: ", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    row = 0;
    col = 0;
    dir = 1;
    total = r * c;

    printf("Diagonal traversal: ");
    for (count = 0; count < total; count++) {
        printf("%d ", mat[row][col]);

        if (dir == 1) {
            if (col == c - 1) {
                row++;
                dir = -1;
            } else if (row == 0) {
                col++;
                dir = -1;
            } else {
                row--;
                col++;
            }
        } else {
            if (row == r - 1) {
                col++;
                dir = 1;
            } else if (col == 0) {
                row++;
                dir = 1;
            } else {
                row++;
                col--;
            }
        }
    }

    return 0;
}