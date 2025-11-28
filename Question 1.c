#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int lastNonZeroFoundAt = 0;

    // Move non-zero elements forward
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[lastNonZeroFoundAt] = nums[i];
            lastNonZeroFoundAt++;
        }
    }

    // Fill remaining positions with 0
    for(int i = lastNonZeroFoundAt; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums)/sizeof(nums[0]);

    moveZeroes(nums, n);

    // Print the result
    for(int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    return 0;
}

