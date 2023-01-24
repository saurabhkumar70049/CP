#include<bits/stdc++.h>
using namespace std;

// int calculate(int N, int Q, int Quer[]) {
//     int sum = 0;
    
//     for (int i = 0; i < Q; i++) {
//         int index = 1;
//     //     sum = quer[i]%5
//         while(Quer[i] > N) {
//             Quer[i] -= index*N;
//             index++;
//         }
//         sum += ceil(Quer[i]/index);
//     }
//     return sum;
// }

int calculate(int N, int Q, vector<int> Quer) {
    
    int sum = 0;
    int t = 0;
    
    for (int i = 0; i < Q; i++) {
        int index = 1;
        int t = 0;
        while(Quer[i] > 0){
            for(int r = 0; r < N; r++) {
                Quer[i] -= index;
                if (Quer[i] <= 0) {
                    t = r+1;
                    break;
                }
                
            }
            index *= 2;
        }
        sum +=t;
    }
    
    return sum;
}


int main() {
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> quer;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        quer.push_back(a);
    }
    cout << calculate(n, q, quer);
}