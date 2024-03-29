// 414. Third Maximum Number
// Easy
// 2.3K
// 2.7K
// Companies
// Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

 

// Example 1:

// Input: nums = [3,2,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2.
// The third distinct maximum is 1.
// Example 2:

// Input: nums = [1,2]
// Output: 2
// Explanation:
// The first distinct maximum is 2.
// The second distinct maximum is 1.
// The third distinct maximum does not exist, so the maximum (2) is returned instead.
// Example 3:

// Input: nums = [2,2,3,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2 (both 2's are counted together since they have the same value).
// The third distinct maximum is 1.
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
 

// Follow up: Can you find an O(n) solution?

// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         nums.erase(unique(nums.begin(), nums.end()), nums.end());
//         int n = nums.size();
//         if(n < 3) { return nums[n-1];}
//         else { return nums[n-3]; }
//     }
// };

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n < 3) {
            return nums[n-1];
        }
        int j = 1;
        for(int i = n-2; i >= 0; i--) {
            if(nums[i] != nums[i+1]) {
                j++;
            }
            if(j == 3) {
                return nums[i];
            }
        }
        return nums[n-1];
    }
};