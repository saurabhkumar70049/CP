#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool power2Bit(string str, int n){
    int count = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if (str[i] == '1') {
            count++;
            sum += pow(2, i);
        }
    }
	cout << "count : " << count << endl << "sum : " << sum <<endl;
    if(count > 3) {
        return false;
    }
    else {
        if(sum > 2) {
            return true;
        }
        return false;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    power2Bit(str, n) == 1 ? cout << "YES" << endl : cout << "NO" <<endl;
	}
	return 0;
}
