// Created by Aarav Choudhary on 11/09/26.
/* Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/
#include <stdio.h>

int main() {
    int n, i, arr[100], key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}