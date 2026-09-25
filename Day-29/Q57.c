// Created by Aarav Choudhary on 07/09/26.
/* Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/
#include <stdio.h>

int main() {
    int n, i, arr[100], sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("%d", sum);

    return 0;
}