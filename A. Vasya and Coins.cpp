#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<((2*b)+a+1)<<endl;
        }
    }
}
