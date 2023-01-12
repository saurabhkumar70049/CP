#include<bits/stdc++.h>
using namespace std;

void GetCoinState(char s,int n)
{
    if(s == 'H')
    {
        if(n % 2 == 0)
        {
            cout<<s<<endl;
        }
        else
        {   
            cout<<"T"<<endl;
        }
    }
    else
    {
         if(n % 2 == 0)
        {
            cout<<s<<endl;
        }
        else
        {   
            cout<<"H"<<endl;
        }
    }
}
int main() 
{
    char s;
    cin>>s;
    int n;
    cin>>n;

    GetCoinState(s,n);
}