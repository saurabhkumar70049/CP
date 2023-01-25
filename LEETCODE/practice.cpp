#include <bits/stdc++.h>
using namespace std;

// void targetIndices(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size(); i++) {
//             cout << nums[i] << " ";
//         }
//         int k = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
//         int j = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//         cout << endl;
//         cout << j << " " << k ;
//         if (nums[k-1] == target && nums[j] == target) {
//             cout << "yes";
//         }
        
        
//     }


char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0, j = letters.size()-1;
        cout << j << " ";
        while(i <= j) {
            int mid = i + (j - i)/2;
            cout << mid << ":" << letters[mid];
            if(letters[mid] == target   ) {
                cout << letters[mid] << endl;
                if (mid == letters.size()-1) {
                    return letters[0];
                }
                else if (letters[mid] != letters[mid+1]) {
                    return letters[mid+1];
                }
                else {
                    i = mid + 1;
                }
            }
            else if(letters[mid] > target) {
                j = mid -1;
            }
            else {
                i = mid + 1;
            }
        
        }
        return (char)('t');
    }
int main() {
    vector<char> num = {'c', 'f', 'g'};
    char a;
    cout << "enter character : ";
    cin >> a;
    cout << nextGreatestLetter(num, a);
    // for (int i = 0; i < 1; i++) {
    //     cin >> a;
    //     num.push_back(a);
    // }
    // int max_bit;
    // cin >> max_bit;
    // targetIndices(num, max_bit);

    // int a = lower_bound(num.begin(), num.end(), 3) - num.begin();
    // cout << a ;

    
    
    //cout << toHex(num) << " ";
}
