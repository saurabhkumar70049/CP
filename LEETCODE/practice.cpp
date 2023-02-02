#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int count = 0;
    while(n) {
        count++;
        n = n&(n-1);
        
    }
    cout << count;
}