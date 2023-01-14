#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index(2);
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i < j) {
            if ((nums[i]+nums[j]) == target) {
                index[0] = i;
                index[1] = j;
                return index;
            }
            else if((nums[i]+nums[j]) > target) {
                j--;
            }
            else {
                i++;
            }
        }
        return index;

    }
int main() {
    
    vector<int> num;
    int a;
    cout << "enter num : ";
    for (int i = 0; i < 4; i++) {
        cin >> a;
        num.push_back(a);
    }
    int max_bit;
    cin >> max_bit;
    twoSum(num, max_bit);

    
    
    //cout << toHex(num) << " ";
}
