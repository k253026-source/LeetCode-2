#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int i = 0;  
    for(int j = 1; j < n; j++) {
        if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1; 
}

int main() {
    int nums1[] = {1, 1, 2};
    int n1 = sizeof(nums1)/sizeof(nums1[0]);
    int k1 = removeDuplicates(nums1, n1);
    
    printf("k = %d, nums = [", k1);
    for(int i = 0; i < k1; i++)
        printf("%d%s", nums1[i], i < k1-1 ? "," : "");
    printf("]\n");

    int nums2[] = {0,0,1,1,1,2,2,3,3,4};
    int n2 = sizeof(nums2)/sizeof(nums2[0]);
    int k2 = removeDuplicates(nums2, n2);

    printf("k = %d, nums = [", k2);
    for(int i = 0; i < k2; i++)
        printf("%d%s", nums2[i], i < k2-1 ? "," : "");
    printf("]\n");

    return 0;
}

