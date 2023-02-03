// 977. Squares of a Sorted Array
// Easy
// 7.3K
// 181
// Companies
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in non-decreasing order.
 

// Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?

//1st solution

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++) {
//             nums[i] = pow(nums[i], 2);
//         }
//         sort(nums.begin(), nums.end());
//         return nums;
//     }
// };

//2nd solution

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& arr) {
//         int n = arr.size();
//         int j = n;
//         for(int i = 0; i < n; i++) {
//             if(arr[i] >= 0) {
//                 j = i;
//                 break;
//             }
//         }
//         vector<int> vec;
//         int i = j-1;
//         while(i >= 0 && j < n) {
//             if(arr[j] < abs(arr[i])){
//                 vec.push_back(pow(arr[j], 2));
//                 j++;
//             }
//             else {
//                 vec.push_back(pow(arr[i], 2));
//                 i--;
//             }
//         }
//         while(i >= 0) {
//             vec.push_back(pow(arr[i], 2));
//             i--;
//         }
//         while(j < n) {
//             vec.push_back(pow(arr[j], 2));
//             j++;
//         }
//         return vec;
        
        
//     }
// };

//3rd solution 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n-1, temp = 0, i = n-1;
        vector<int> vec(n);
        while(i >= 0) {
            if(abs(arr[l]) >= abs(arr[r])) {
                temp = arr[l];
                l++;
            }
            else {
                temp = arr[r];
                r--;
            }
            vec[i] = int(temp*temp);
            i--;
        }
        
        return vec;
    }
};