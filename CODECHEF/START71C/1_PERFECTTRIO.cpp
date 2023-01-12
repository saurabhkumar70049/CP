#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a >= b) {
	        if(a >= c) {
	            if ((a - (b+c)) == 0) {
	                cout << "YES" <<endl;
	            }
	            else {
	                cout << "NO" << endl;
	            }
	        }
	        else {
	            if ((c - (b+a)) == 0) {
	                cout << "YES" <<endl;
	            }
	            else {
	                cout << "NO" << endl;
	            }
	        }
	    }
	    else {
	        if(b >= c) {
	            if ((b - (a+c)) == 0) {
	                cout << "YES" <<endl;
	            }
	            else {
	                cout << "NO" <<endl;
	            }
	        }
	        else {
	            if ((c - (b+a)) == 0) {
	                cout << "YES" <<endl;
	            }
	            else {
	                cout << "NO" << endl;
	            }
	        }
	    }
	}
	return 0;
}