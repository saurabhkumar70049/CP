#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t;
	while(t--) {
	    int n, m, r = 0;
	    cin >> n >> m;
	    string a, b;
	    cin >> a >> b;
	    string str = a+b;
        cout << str << endl;
	    int s = str.length();
	    for(int i = 0; i < s; i++) {
	        if(str[i] != '0') {
	            int count = 1;
	            for(int j = i+1; j < s; j++) {
	                if(str[i] == str[j]){
	                    count++;
	                    str[j] = '0';
	                }
	            }
	            if(count%2 != 0) {
	                r++;
	            }
	        }
	    }
	    if(r > 1) {
	        cout << "NO" <<endl;
	    }
	    else {
	        cout << "YES" <<endl;
	    }
	}
	return 0;
}
