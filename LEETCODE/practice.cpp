#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = n-1;
        while(l < r) {
            while(((l%2 == 0 && arr[l]%2 == 0) || (l%2 != 0 && arr[l]%2 != 0))) {
                l++;
                cout << l << " ";
                if(l >=r) {
                    break;
                }
            }
            cout << endl;
            while(((r%2 == 0 && arr[r]%2 == 0) || (r%2 != 0 && arr[r]%2 != 0)) ) {
                r--;
                cout << r << " ";
                if(l >=r) {
                    break;
                }
            }
            cout << endl;
            if(l >=r) {
                break;
            }
            swap(arr[l], arr[r]);
            r--;
            l++;
            
        }
        return arr;
    }

int main() {
    vector<int> vec = {2,3,3,1,4,4,0,0,1,3};
    vector<int> vec1 = sortArrayByParityII(vec);
    for(int i : vec1) {
        cout << i << " ";
    }
}