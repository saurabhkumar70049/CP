// 922. Sort Array By Parity II
// Easy
// 2.2K
// 82
// Companies
// Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

// Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

// Return any answer array that satisfies this condition.

 

// Example 1:

// Input: nums = [4,2,5,7]
// Output: [4,5,2,7]
// Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
// Example 2:

// Input: nums = [2,3]
// Output: [2,3]
 

// Constraints:

// 2 <= nums.length <= 2 * 104
// nums.length is even.
// Half of the integers in nums are even.
// 0 <= nums[i] <= 1000
 

// Follow Up: Could you solve it in-place?


// 1st solution 
// class Solution {
// public:
//     void hoarePartision(vector<int> &arr){
//         int i = -1, j = arr.size();
//         while(true) {
//             do{
//                 i++;
//             }while(arr[i]%2 == 0);
//             do{
//                 j--;
//             }while(arr[j]%2 != 0);
//             if (i >= j) {
//                 break;
//             }
//             swap(arr[i], arr[j]);
//         }
//     }
//     vector<int> sortArrayByParityII(vector<int>& arr) {
//         int n = arr.size();
//         hoarePartision(arr);
//         int l = 0, r = n-1;
        
//             while(l < r) {
//                 if(l%2 != 0 && r%2 == 0) {
//                     swap(arr[l], arr[r]);
//                 }
//                 l++;
//                 r--;
//             }
    
//         return arr;
//     }
// };

// 2nd solution

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = 1;
        while(i < n && j < n) {
            if (arr[i]%2 == 0) {
                i += 2;
            }
            else if(arr[j]%2 != 0) {
                j += 2;
            }
            else {
                swap(arr[i], arr[j]);
                i +=2;
                j +=2;
            }
        }
        return arr;
    }
};

