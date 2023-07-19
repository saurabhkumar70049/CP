// 31. Next Permutation
// Medium
// 15.9K
// 4.2K
// Companies
// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.

// The replacement must be in place and use only constant extra memory.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// Output: [1,5,1]
 

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 100



//COncept :- firstly we found out breaking point where we need to give changes --> means before this point no need to make any changes
//looked the code 


class Solution {
public:
    void reverse(vector<int> &vec, int low, int high){
        while(low < high){
            swap(vec[low], vec[high]);
            low++;
            high--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i =nums.size()-2; i >= 0; i--){
            if(nums[i]<nums[i+1]){
                index = i;   //it is the breaking point 
                break;
            }
        }
        if(index == -1){
            return reverse(nums, 0, nums.size()-1); // if array is in decreasing sorted
        }
        else {
            int index2 = -1;
            for(int i = nums.size()-1; i > index; i--){
                if(nums[index] < nums[i]){
                    index2 = i;
                    break;
                }
            }
            swap(nums[index], nums[index2]);
            reverse(nums, index+1, nums.size()-1); // we reverse it because it already sorted in decreasing order
        }
    }
};