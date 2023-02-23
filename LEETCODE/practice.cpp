#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec = {{2,4,1}, {1,9,8},{2,4,1},{10, 2, 1}};
    sort(vec.begin(), vec.end());
    for(auto i : vec) {
        for(int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    vector<int>::iterator it;
    it = unique(vec.begin(), vec.end());
    for(auto i : vec) {
        for(int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

}