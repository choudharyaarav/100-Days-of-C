// Created by Aarav Choudhary on 10/09/26.
/* Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include <stdio.h>

int main() {
    int n1, n2, i, arr1[100], arr2[100];

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Merged array: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);

    return 0;
}