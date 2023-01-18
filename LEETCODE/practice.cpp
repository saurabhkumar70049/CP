#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0, j = n-1;
        while(i <= j) {
            int mid = (i+j)/2;
            cout << mid << " " << arr[mid] << endl;
            if (((arr[mid] - (mid+1)) < k) && ((mid == n-1) || (arr[mid+1] - (mid+2)) >= k)) {
                return (k + mid + 1);
            }
            else if((arr[mid] - (mid+1)) >= k){
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return k;

        
    }
int main() {
    
    vector<int> num = {1,4,7,9,14,15,16,18,20,23,24,25,26,28,29,30,33,35,38,39,42,44,46,48,49,52,53,55,57,58,60,63,68,69,70};
    // int a;
    // cout << "enter num : ";
    // for (int i = 0; i < 1; i++) {
    //     cin >> a;
    //     num.push_back(a);
    // }
    int max_bit;
    cin >> max_bit;
    cout << findKthPositive(num, max_bit);

    
    
    //cout << toHex(num) << " ";
}
