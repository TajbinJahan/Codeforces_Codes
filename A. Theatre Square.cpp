#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll d=0,e=0;
    if(n%a==0)
    {
        d=n/a;

    }
    else{
        d=n/a +1;
    }
    if(m%a==0)
    {
        e=m/a;
    }
    else{
        e=m/a+1;
    }

    cout<<d*e;


}
