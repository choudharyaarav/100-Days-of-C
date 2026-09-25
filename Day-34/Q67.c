// Created by Aarav Choudhary on 12/09/26.
/* Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/
#include <stdio.h>

int main() {
    int n, i, arr[100], pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &value);

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}