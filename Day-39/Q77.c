// Created by Aarav Choudhary on 17/09/26.
/* Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/
#include <stdio.h>

int main() {
    int n, dummy, i, j, mat[20][20], distinct = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &dummy);

    printf("Enter %d elements: ", n * n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (mat[i][i] == mat[j][j])
                distinct = 0;

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}