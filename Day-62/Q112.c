// Created by Aarav Choudhary on 10/10/26.
/* Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25
*/
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, current, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    current = arr[0];
    maxSum = arr[0];

    for (i = 1; i < n; i++) {
        if (current + arr[i] > arr[i])
            current = current + arr[i];
        else
            current = arr[i];

        if (current > maxSum)
            maxSum = current;
    }

    printf("%d", maxSum);

    return 0;
}