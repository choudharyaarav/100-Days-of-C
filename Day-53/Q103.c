// Created by Aarav Choudhary on 01/10/26.
/* Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0
*/
#include <stdio.h>

int main() {
    int nums[100];
    int n, i, total = 0, left = 0, right, ans = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for (i = 0; i < n; i++) {
        right = total - left - nums[i];
        if (left == right) {
            ans = i;
            break;
        }
        left = left + nums[i];
    }

    printf("%d", ans);

    return 0;
}