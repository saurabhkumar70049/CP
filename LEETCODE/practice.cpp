#include <bits/stdc++.h>
using namespace std;

int initialIndex(vector<int> arr, int target) {
        int i = 0, j = arr.size() - 1;
        while(i <= j) {
            int mid = (i+j)/2;
            if(arr[mid] == target) {
                if(arr[mid-1] != target || mid == 0) {
                    return mid;
                }
                else {
                    j = mid - 1;
                }

            }
            else if(arr[mid] > target) {
                j = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return -1;
    }

    int finalIndex(vector<int> arr, int target) {
        int n = arr.size();
        int i = 0, j = n - 1;
        while(i <= j) {
            int mid = (i+j)/2;
            if(arr[mid] == target) {
                if(arr[mid+1] != target || mid == n-1) {
                    return mid;
                }
                else {
                    i = mid + 1;
                }

            }
            else if(arr[mid] < target) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }
        return -1;
    }

    void searchRange(vector<int>& nums, int target) {
        
        vector<int> range(2);
        range[0] = initialIndex(nums, target);
        range[1] = finalIndex(nums, target);
        cout << range[0] << " " << range[1];
    }
int main() {
    
    vector<int> num;
    int a;
    cout << "enter num : ";
    for (int i = 0; i < 1; i++) {
        cin >> a;
        num.push_back(a);
    }
    int max_bit;
    cin >> max_bit;
    searchRange(num, max_bit);

    
    
    //cout << toHex(num) << " ";
}
