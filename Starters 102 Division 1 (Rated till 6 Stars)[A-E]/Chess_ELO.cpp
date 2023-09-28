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
int mod=1e9+7;
int MOD=1e9+7;
const int MAXL=64;
int power(int a, int b, int p){
    if(a==0)
    return 0;
    int res=1;
    a%=p;
    while(b>0)
    {
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}
int modInverse(int n,int p)
{
	return power(n, p - 2, p);
}   
int powerm(int a,int b) { //m-> mod
    if(b==0) {
        return 1;
    }
    int curr=a,res=1;
    for(int i=0;i<MAXL;i++) {
        if((1LL<<i)&b) {
            res=(res*curr)%MOD;
        }
        curr=(curr*curr)%MOD;
    }
    return res;
}
vector<int>fac,inv;
    int n=0;
    void facm(int x) { //precomputes factorials!
        n=x;
        fac.resize(n+1),inv.resize(n+1); //till fac[n] and inv[n]
        fac[0]=1;
        for(int i=1;i<=n;i++) {
            fac[i]=(fac[i-1]*i)%MOD;
        }
    }
    void preinv() { //precomputes inverse!
        inv[n]=powerm(fac[n],MOD-2);
        for(int i=n-1;i>=0;i--) {
            inv[i]=(inv[i+1]*(i+1))%MOD;
        }
    }
    int choose(int a,int b) { //get nCr
        if(a<b) {
            return 0;
        }
        return ((fac[a]*inv[b])%MOD*inv[a-b])%MOD;
    }              
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    int n1=5e6+1;
    // int fac[n1];
    // fac[0]=1;
    // for(int i=1;i<=n1;i++){
    //     fac[i]=(fac[i]*i)%mod;
    // }
    facm(n1);
    preinv();
while(t--){
    int i,j,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m,h;
    cin>>p>>q>>m>>h;
    int x=choose(p+q,p);
    u=(fac[m+p-1]*inv[m-1])%mod;
    v=(fac[h+q-1]*inv[h-1])%mod;
    int z=(fac[m+h+p+q-1]*inv[m+h-1])%mod;
    int ans=(u*v)%mod;
    ans=(ans*x)%mod;
    ans=(ans*modInverse(z,mod))%mod;
    cout<<ans<<endl;





    }
}