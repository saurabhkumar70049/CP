// 16. 3Sum Closest
// Medium
// 8.7K
// 466
// Companies
// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

 

// Example 1:

// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
// Example 2:

// Input: nums = [0,0,0], target = 1
// Output: 0
// Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
 

// Constraints:

// 3 <= nums.length <= 500
// -1000 <= nums[i] <= 1000
// -104 <= target <= 104

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int diff = INT_MAX, diff1 = INT_MAX;
        int ans = 0;
        for(int i = 0; i < n-2; i++) {
            int j = n-1, k = i+1, sum = 0;
            while(k < j) {
                sum = nums[i]+nums[j]+nums[k];
                diff = abs(sum - target);
                if(diff < diff1){
                    ans = sum;
                    diff1 = diff;
                }
                // diff1 = diff;
                if(sum > target) {
                    j--;
                }
                else if(sum < target) {
                    k++;
                }
                else {
                    return sum;
                }
            }
        }
        return ans;
    }
};