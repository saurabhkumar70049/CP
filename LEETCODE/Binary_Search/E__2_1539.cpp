// 1539. Kth Missing Positive Number
// Easy
// 3.5K
// 253
// Companies
// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.

 

// Example 1:

// Input: arr = [2,3,4,7,11], k = 5
// Output: 9
// Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
// Example 2:

// Input: arr = [1,2,3,4], k = 2
// Output: 6
// Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 

// Constraints:

// 1 <= arr.length <= 1000
// 1 <= arr[i] <= 1000
// 1 <= k <= 1000
// arr[i] < arr[j] for 1 <= i < j <= arr.length
 

// Follow up:

// Could you solve this problem in less than O(n) complexity?



// solution 1st :-

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n = arr.size();
//         int i = 0, j = n-1;
//         while(i <= j) {
//             int mid = (i+j)/2;
//             if (((arr[mid] - (mid+1)) < k) && ((mid == n-1) || (arr[mid+1] - (mid+2)) >= k)) {
//                 return (k + mid + 1);
//             }
//             else if((arr[mid] - (mid+1)) >= k){
//                 j = mid - 1;
//             }
//             else {
//                 i = mid + 1;
//             }
//         }
//         return k;

        
//     }
// };


// Solution second :- 


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0, j = arr.size();
        while(i < j) {
            int mid = (i + j)/2;
            if (arr[mid]-1-mid < k) {
                i = mid+1;
    
            }
            else {
                j = mid;
            }
        }
        return i+k;

        
    }
};
