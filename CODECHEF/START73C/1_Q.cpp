#include <bits/stdc++.h>
using namespace std;

bool check_posibility(int arr[], int n){
    int max1 = 0;
    for (int i = 0; i < n; i++) {
        max1 |= arr[i];
    }
    int i = 0;
    while(i < n-1) {
        int s = arr[i]^max1;
        arr[i] ^= s;
        arr[i+1] ^=s;
        i++;
    }
    // cout << n << " ";
    // for(int i= 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    
    for (int i = 0; i < n-1; i++) {
        if(arr[i] != arr[i+1]) {
            return false;
        }
        
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    
	    check_posibility(arr, n) ? cout << "YES" <<endl : cout << "NO" << endl;
	}
	return 0;
}
