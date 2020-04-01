#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
      ll k;
    cin>>k;
    v.pb(k);
     }
    ll a;
    cin>>a;
    ll c=count(v.begin(),v.end(),a);
    cout<<c<<endl;
    ll b;
    cin>>b;
     if(find(v.begin(),v.end(),b)!=v.end())
    cout<<"yes\n";
    else
    cout<<"No\n";
    vector<ll>::iterator it;
    it=std::find(v.begin(),v.end(),b);
    cout<<*it<<endl;
    return 0;
  }
