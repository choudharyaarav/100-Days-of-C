// Created by Aarav Choudhary on 13/09/26.
/* Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include <stdio.h>

int main() {
    int n, i, arr[100], temp[100], k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}