// 1004. Max Consecutive Ones III
// Medium
// 5.9K
// 70
// Companies
// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

// Example 1:

// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6
// Explanation: [1,1,1,0,0,1,1,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
// Example 2:

// Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
// Output: 10
// Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 

// Constraints:

// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.
// 0 <= k <= nums.length



// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int i = 0, j = 0, n= nums.size();
//         int count = 0, ans = 0;
//         while(i < n) {
//             while(count <= k && i < n) {
//                 if(nums[i] == 0){
//                     count++;
//                 }
               
//                 if(count <= k){
//                     ans = max(ans, i-j+1);
//                 }
//                 i++;
//             }
//             while(j <= i && count > k){
//                 if(nums[j] == 0){
//                     count--;
//                 }
//                 j++;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, n= nums.size();
        int count = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                count++;
            }
            while(count > k) {
                if(nums[j] == 0) {
                    count--;
                }
                j++;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};