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
        ll x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        ll d1=0,d2=0;
        ll k1=x1,k2=x2;
 
        while(k1)
        {
            k1 = k1 / 10;
            d1++;
        }
 
        while(k2)
        {
            k2=k2/10;
            d2++;
        }
 
        if (d1+p1<d2+p2)
            cout <<"<"<<endl;
        else if(d1 + p1 >d2+p2)
            cout <<">"<<endl;
        else
        {
            x1=x1*pow(10,6-d1);
            x2=x2*pow(10,6-d2);
 
            if (x1 > x2)
                cout<<">"<<endl;
            else if (x1 < x2)
                cout<<"<"<<endl;
            else
                cout<<"="<<endl;
        }
 
    }
 
    return ghost;
}