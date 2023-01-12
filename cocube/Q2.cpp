#include<bits/stdc++.h>
using namespace std;

int Distance(int Ax, int Ay, int Bx, int By) {
    int x, y;
    x = (pow(Ax, 2) + pow(Ay, 2));
    y = (pow(Bx, 2) + pow(By, 2));
    if (x > y) {
        return y;
    }
    else {
        return x;
    }
}

int main() {
    int Ax, Ay, Bx, By;
    cin >> Ax >> Ay >> Bx >> By;

    cout << Distance(Ax, Ay, Bx, By) <<endl;
}