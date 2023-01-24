
#include <bits/stdc++.h>
using namespace std;
     
int printAllKLengthRec(string str, string prefix,
                                    int n, int k,int sum)
{
    
    if (k == 0)
    {
        return sum-1;
    }
 
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
         
        
        newPrefix = prefix + str;
         
       
        printAllKLengthRec(str, newPrefix, n, k - 1, sum+1);
    }
 
}
 
int solve(int n, int k, string str)
{
    return printAllKLengthRec(str, "", n, k,0);
}
 

int main()
{
     
    cout << "First Test" << endl;
    string str = "jz";
    int k = 1;
    cout << solve(2, k, str);
     
    // cout << "Second Test\n";
    // char set2[] = {'a', 'b', 'c', 'd'};
    // k = 1;
    // printAllKLength(set2, k, 4);
}