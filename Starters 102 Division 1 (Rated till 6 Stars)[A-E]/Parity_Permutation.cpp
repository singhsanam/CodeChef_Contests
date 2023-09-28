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
    cin>>n>>k;
    int a[n+1];
    int o=0,e=0;
    p=1;
    int mod=1e9+7;
    q=1;
    x=1;
    y=1;
    for(i=1;i<=n;i++){
        p=(p*i)%mod;
        if(i<=n/2) q=(q*i)%mod;
        if(i<=(n+1)/2) x=(x*i)%mod;
        if(i<=n/2) y=(y*i)%mod;
        cin>>a[i];
        if(a[i]%2==1) o++;
        else e++;

    }
    if(k==0){
        if(e==0||o==0){
            cout<<p<<endl;
        }
        else{
            cout<<0<<endl;
        }
        continue;
    }
    if(n%2==0){
        if(e!=o){
            cout<<0<<endl;
        }
        else{
            q=(q*q)%mod;
            q=(q*2)%mod;
            cout<<q<<endl;
        }
    }
    else{
        if(abs(o-e)!=1){
            cout<<0<<endl;
        }
        else{
            cout<<(x*y)%mod<<endl;
        }
    }
    



    }
}