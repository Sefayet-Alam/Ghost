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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
map<string,string> mp;
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x) % md;
    if (p % 2 == 0)
        return x;
    else
        return (x * n) % md;
}
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    string s;
    cin>>t;
    //t=1;
    while(t--)
    {
   ll x;
   cin>>x;
   if(x==1){cout<<3<<endl;}
   else if(x%2){cout<<1<<endl;}
   else if((x&(x-1))==0){
    x++;
    cout<<x<<endl;
   }
   else{
    for(ll i=1;i<31;i++){
        if(x&(1<<i)){
            cout<<pow1(2,i)<<endl;
            break;
        }
    }
   }
 
    }
 
    return ghost;
}
 