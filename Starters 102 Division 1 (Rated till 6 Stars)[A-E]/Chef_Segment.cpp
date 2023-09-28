/*You don't get to choose if you get hurt in this world...but you do have some say in who hurts you. I like my choices.*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
               
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n;
    int a[n];
    map<int,int>m1;
    set<int>s1;
    rep(i,0,n){
        cin>>a[i];
        s1.insert(a[i]);
        m1[a[i]]++;
    }
    vector<int>v1;
    for(auto s:s1) v1.push_back(s);
    reverse(all(v1));
    int max1=v1[0];
    int n1=v1.size();
    map<int,int>dp;
    int ans=0;
    for(i=0;i<n1;i++){
        dp[v1[i]]=m1[v1[i]];
        int z=0;
        for(j=2*v1[i];j<=max1;j+=v1[i]){
            z=max(z,dp[j]);
        }
        dp[v1[i]]+=z;
        ans=max(ans,v1[i]*dp[v1[i]]);
    }
    cout<<ans<<endl;



    }
}