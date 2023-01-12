#include <bits/stdc++.h>
using namespace std;

int streak_count(int a[], int b[], int n) {
    int c_max =  0, c = 0;
    
    for (int i = 0; i < n; i++) {
        c++;
        if (a[i] == 0 || b[i] == 0) {
            c = 0;
        }
        c_max = max(c, c_max);
    }
    return c_max;
}

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n ;
	    int a[n], b[n];
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> b[i];
	    }
	    
	    cout << streak_count(a, b, n);
	}
	return 0;
}