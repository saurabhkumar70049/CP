#include <iostream>
using namespace std;

int max_participent(long long int n, long long int m) {
    if (n == 0) {
        return m;
    }
    return max_participent(m%n, n);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    long long int n, m;
	    cin >> n >> m;
	    cout << max_participent(n, m) << endl;
	}
	return 0;
}