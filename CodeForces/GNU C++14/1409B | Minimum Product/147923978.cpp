#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
ll fun(ll a, ll b, ll x, ll y, ll n) 
{
   
    ll t= min(n, a-x);
 
    a=a-t;
    
    n=n-t;
 
    t=min(n,b-y);
   
    b= b-t;
   
 
    return(a*b);
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
 
        
        ll a1=fun(a,b,x,y,n);
        ll a2=fun(b,a,y,x,n);
 
        cout<<min(a1,a2)<<"\n";
 
 
 
 
 
 
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}