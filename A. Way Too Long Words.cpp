#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
    cin>>s;
    ll n=s.size();



    if(s.size()<=10)
    {
        cout<<s<<endl;
    }
    else
    {
        cout<<s[0]<<s.size()-2<<s[n-1]<<endl;
    }

    }


}
