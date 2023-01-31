#include <bits/stdc++.h>
using namespace std;

bool checkCapacity(vector<int> &w, int capacity, int days) {
        int sum = 0, count = 1;
        for(int i = 0; i < w.size(); i++) {
            sum += w[i];
            if(sum > capacity) {
                sum = w[i];
                count++;
            }
        }
        if(count <= days) {
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int totalSum = weights[0], maxElement = weights[0];
        int ans = 0;
        for(int i = 1; i < weights.size(); i++) {
            totalSum += weights[i];
            if(maxElement < weights[i]) {
                maxElement = weights[i];
            }
        }
        cout << totalSum << " " << maxElement << " ";
        while(totalSum >= maxElement) {
            int capacity = maxElement + (totalSum - maxElement)/2;
            cout << endl << capacity << endl;
            bool m = checkCapacity(weights, capacity, days);
            cout << m << " ";
            if(m == 1){
                ans = capacity;
                totalSum = capacity;
            }
            else {
                maxElement = capacity+1;
            }

        }
        return ans;

    }
int main() {
    vector<int> num = {1,2,3,4,5,6,7,8,9,10};
    int a;
    cout << "enter character : ";
    cin >> a;
    cout << shipWithinDays(num, a);
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
