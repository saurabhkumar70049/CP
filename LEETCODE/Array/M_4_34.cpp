// 34. Find First and Last Position of Element in Sorted Array
// Medium
// 15.4K
// 367
// Companies
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
 

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109
// nums is a non-decreasing array.
// -109 <= target <= 109



class Solution {
public:

    int initialIndex(vector<int> arr, int target) {
        int i = 0, j = arr.size() - 1;
        while(i <= j) {
            int mid = (i+j)/2;
            if(arr[mid] == target) {
                if( mid == 0 || arr[mid-1] != target) {
                    return mid;
                }
                // else if(arr[mid-1] != target) {
                //     return mid;
                // }
                else {
                    j = mid - 1;
                }

            }
            else if(arr[mid] > target) {
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return -1;
    }

    int finalIndex(vector<int> arr, int target) {
        int n = arr.size();
        int i = 0, j = n - 1;
        while(i <= j) {
            int mid = (i+j)/2;
            if(arr[mid] == target) {
                if(mid == n-1 || arr[mid+1] != target) {
                    return mid;
                }
                // else if (arr[mid+1] != target) {
                //     return mid;
                // }
                else {
                    i = mid + 1;
                }

            }
            else if(arr[mid] > target) {
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> range(2);
        range[0] = initialIndex(nums, target);
        range[1] = finalIndex(nums, target);
        return range;
    }
};