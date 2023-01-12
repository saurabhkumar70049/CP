#include <bits/stdc++.h>
using namespace std;

void getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> num2(nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            num2[i] = pow(2, maximumBit) -1;
            for (int j = 0; j < nums.size() - i; j++) {
                num2[i] ^= nums[j];
            }
        }
        for (auto i = num2.begin(); i != num2.end(); i++) {
            cout << *i << " ";
        }
    }
int main() {
    
    vector<int> num;
    num.reserve(4);
    int a;
    cout << "enter num : ";
    for (int i = 0; i < 4; i++) {
        cin >> a;
        num.push_back(a);
    }
    cout << num.size();
    int max_bit;
    cin >> max_bit;
    getMaximumXor(num, max_bit);

    
    
    //cout << toHex(num) << " ";
}
