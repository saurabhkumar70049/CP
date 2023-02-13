#include <bits/stdc++.h>
using namespace std;

void checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool> vec1; 
        for(int i = 0; i < n; i++) {
            vector<int> vec2(nums.begin()+l[i], nums.begin()+r[i]+1);
            for(int i : vec2) {
                cout << i << " ";
            }
            cout << endl;
            sort(vec2.begin(), vec2.end());
            bool res = true;
            int d = vec2[1]-vec2[0];
            for(int j = 2; j < vec2.size(); j++) {
                if((vec2[j]-vec2[j-1]) != d) {
                    res = false;
                }
            }
            vec1.push_back(res);
        }
        for(auto i : vec1) {
            i == 0 ? cout << "flase" << " " : cout << "true" <<" ";
        }
    }


int main() {
    vector<int> vec = {4,6,5,9,3,7};
    vector<int> l = {0,0,2};
    vector<int> r = {2,3,5};
    checkArithmeticSubarrays(vec, l, r);
}