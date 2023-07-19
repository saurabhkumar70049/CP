#include <bits/stdc++.h>
using namespace std;


int isCoprime(int a, int b){
        return (a == 0)? b : isCoprime(b%a, a);
    }
    
    int countPair(vector<int>& nums) {
        int n = nums.size();
        int firstIndex = -1, lastIndex = -1, s = 0, t = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1 && s == 0) {
                firstIndex = i;
                s=1;
            }
            
            if(nums[n-1-i] == 1 && t == 0) {
                lastIndex = n-1-i;
                t = 1;
            }
        }
        cout << lastIndex << " " << firstIndex <<endl;
        if(lastIndex == firstIndex && firstIndex != -1){
            return 1;
        }
        
        else if (firstIndex == -1 ){
            return 0;
        }
        
        return lastIndex-firstIndex; 
    }
int main() {
    vector<int> vec = {0,1,0,0,1};
   
    cout << countPair(vec);


}