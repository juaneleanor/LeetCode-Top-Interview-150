using System;

namespace LeetCode150{
    public class Solution {
        public int[] Merge(int[] nums1, int m, int[] nums2, int n){
            int i = 0;
            int j = 0;
            
            while(i < m && j < n){
                if(nums1[i] > nums2[j]){
                    int k = m;
                    while (k > i){
                        nums1[k] = nums1[k-1];
                        k = k - 1;
                    } 
                    nums1[i] = nums2[j];
                    j++;
                    m++;
                }
                i++;
            }

            while(j < n){
                nums1[i] = nums2[j];
                i++;
                j++;
            }

            return nums1;
        }

        static void Main(){
            var solution = new Solution(); 
            var nums1 = new int[] {1, 2, 3, 0, 0, 0};
            var nums2 = new int[] {2, 5, 6};

            int m = 3;
            int n = 3;

            int[] result = solution.Merge(nums1, m, nums2, n);
            Console.WriteLine(string.Join(", ", result));
        }
    }
}
