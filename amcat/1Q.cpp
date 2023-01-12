#include<bits/stdc++.h>
using namespace std;

int editorMiss(string textInput) {
    int answer = 0;
    int len = textInput.length();
    for (int i = 0; i < len; i++) {
        if (isdigit(textInput[i]) || isalpha(textInput[i]) || textInput[i] == ' '){
            answer++;
        }
    }
    return len - answer;
}

int main() {
    string str;
    getline(cin, str);
    cout << editorMiss(str);
}