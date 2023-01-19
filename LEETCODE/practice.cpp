#include <bits/stdc++.h>
using namespace std;

void targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        int k = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        int j = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        cout << endl;
        cout << j << " " << k ;
        if (nums[k-1] == target && nums[j] == target) {
            cout << "yes";
        }
        
    }
int main() {
    
    vector<int> num = {1,2,5,2,3};
    // int a;
    // cout << "enter num : ";
    // for (int i = 0; i < 1; i++) {
    //     cin >> a;
    //     num.push_back(a);
    // }
    int max_bit;
    cin >> max_bit;
    targetIndices(num, max_bit);

    
    
    //cout << toHex(num) << " ";
}
