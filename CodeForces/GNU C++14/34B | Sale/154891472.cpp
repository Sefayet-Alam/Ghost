#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    t=1;
    while(t--)
    {
     ll n,m;
     cin>>n>>m;
     vector<ll> vec(n+1);
     ll a=0;
     for(ll i=0;i<n;i++)
     {
         cin>>vec[i];
     }
     sort(vec.begin(),vec.end());
     for(ll i=0;i<n;i++)
     {
         if(m>0 && vec[i]<0)
         {
             a-=vec[i];
             m--;
         }
     }
     cout<<a<<endl;
 
    }
 
 
    return ghost;
}