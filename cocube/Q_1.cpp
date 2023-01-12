#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    if (n%3 == 0 && n%5 == 0) {
        cout << "3" << endl;
    }
    else if (n%3 == 0) {
        cout << "1" << endl;
    }
    else if (n%5 == 0) {
        cout << "2" << endl;
    }
    else {
        cout << "0" << endl;
    }
}