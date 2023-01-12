
#include<bits/stdc++.h>
using namespace std;
 

 

int main()
{
    string str;
    cin >> str;
    int stp = 0;
    string arr[str.length()];
    int n = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == " ") {
            
            for (int j = stp; j > i; j++) {
                arr[n] = 
            }
            stp = i;
            n++;
        }
    }
    string arr[]
        = { "geeks",   "for",   "geeks", "a",    "portal",
            "to",      "learn", "can",   "be",   "computer",
            "science", "zoom",  "yup",   "fire", "in",
            "be",      "data",  "geeks" };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << mostFrequentWord(arr, n);
 
    return 0;
}