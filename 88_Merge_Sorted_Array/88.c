#include <stdio.h>

void merge(int nums1[], int m, int nums2[], int n) {
    int i = 0, j = 0;

    while (i < m && j < n) {
        if (nums1[i] > nums2[j]) {
            int k = m;

            // Move the elements to the right by one to accommodate the element from nums2
            while (k > i) {
                nums1[k] = nums1[k - 1];
                k = k - 1;
            }

            // Insert the element from nums2
            nums1[i] = nums2[j];

            j += 1; // Increment index for nums2 by 1
            m += 1; // Increment the size of nums1 by 1
        }

        i += 1; // Increment index for nums1 by 1
    }

    // Copy the remaining elements from nums2 to nums1
    while (j < n) {
        nums1[i] = nums2[j];
        i += 1;
        j += 1;
    }
}

int main() {
    // Input
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    int m = 3;
    int n = 3;

    // Merge the two arrays
    merge(nums1, m, nums2, n);

    // Print the merged array
    printf("[");
    for (int i = 0; i < m + n; i++) {
        printf("%d", nums1[i]);
        if (i < m + n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
