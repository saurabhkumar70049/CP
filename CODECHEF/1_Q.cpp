#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int countOperation(vector<int> &vec, int x) {
    int even = 0, odd = 0;
    for (int i = 0; i < vec.size(); i++) {
        if(vec[i]%2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    if(even > 0 && odd > 0) {
        return even;
    }
    else if(odd == 0 && even > 0) {
        if(x%2 == 0) {
            return -1;
        }
        else {
            return even;
        }
    }
    else {
        return 0;
    }
    
}

int main() {
	// your code goes here
	int t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    vector<int> vec;
	    for(int i = 0; i < n; i++) {
	        int a;
	        cin >> a;
	        vec.push_back(a);
	    }
	    cout << countOperation(vec, x);
	    
	}
	return 0;
}