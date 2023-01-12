#include <bits/stdc++.h>
using namespace std;

string multiset1(int arr[], long long int n) {
    int count = 1;
    if (n%2 != 0) {
        return "NO";
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            for (int j = i+1; j < n ; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    
                    arr[j] = -1;
                }
            }
            if (count%2 != 0) {
                return "NO";
            }
            count = 1;
        }
    }
    return "YES";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long long int n;
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    cout << multiset1(a, n) << endl;
	}
	return 0;
}