#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+1];

        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            if(arr[0]==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }

        }

        sort(arr,arr+n,greater<ll>());
        if(arr[0]-arr[1]<=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

