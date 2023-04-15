
///// Font Name ---> BookMan Old Style <-----////
#define   FAST                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int  ll;
#define     INF                             (ll)1e9
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7,siz = 1e6+5;
bool have[siz];

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

/////////////////////////
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}


void solve()
{

}



int main()
{

    FAST;

    ll t;

    cin>>t;
    for(int d=1;d<=t;d++)
    {

        ll n= 26;
    vector<int>v1(n);
    vector<pair<char,int>>pv;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        pv.push_back({char(i+1+64),v1[i]});
    }

     map<char,int>mp;
   for(auto u :pv){
        mp[u.first] = u.second;
    }


    ll q ;
    cin>>q;

    vector<string>sss;
    while(q--)
    {
        string s1,s2="";
        cin>>s1;

    for(int i=0;i<s1.size();i++)
    {
        s2+=mp[s1[i]]+'0';
    }
    sss.push_back(s2);

    }

    map<string , int> mpx;
    ll k=0;
   for(int i=0;i<sss.size();i++)
   {
       mpx[sss[i]]++;
       if(mpx[sss[i]]>1)
       {
           k=1;
           break;
       }
   }

   if(k==1)
    cout<<"Case #"<<d<<":"<<" "<<"YES"<<endl;
   else
    cout<<"Case #"<<d<<":"<<" "<<"NO"<<endl;

    }

}





