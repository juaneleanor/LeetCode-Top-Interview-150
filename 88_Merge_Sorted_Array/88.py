def Merge(nums1, m, nums2, n):
    i = j = 0 # Initialize indexes
    
    while i < m and j < n:
        if nums1[i] > nums2[j]:
            k = m 
            # Move the elements to the right by one to accomodate element from nums2
            while k > i:
                nums1[k] = nums1[k-1]
                k = k - 1

            # Insert the element from nums2
            nums1[i] = nums2[j]
            
            j += 1 # Increment index for nums2 by 1
            m += 1 # Increment the size of nums1 by 1
            
        i += 1 # Increment index for nums1 by 1

    # Copy the remaining elements from nums2 to nums1
    while j < n:
        nums1[i] = nums2[j]
        i += 1
        j += 1
        
    return nums1

# Input
nums1 = [1,2,3,0,0,0]
nums2 = [2,5,6]
m = n = 3

# Expected Output: [1,2,2,3,5,6]

print(Merge(nums1, m, nums2, n))