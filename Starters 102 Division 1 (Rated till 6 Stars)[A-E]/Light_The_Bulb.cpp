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
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){
        cout<<n*(n+1)/2<<endl;
        continue;
    }

    int l1=-1,r1=-1,l2=-1,r2=-1;
    vector<int>v1;
    c=0;
    q=0;
    for(i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            if(l1==-1) l1=i;
            r1=i;
            c++;
        }
        else{
            if(c>0) {
                q=c;
                p++;
            }
            c=0;
        }
    }
    if(c>0) {
        q=c;
        p++;
    }
    if(p>2) cout<<0<<endl;
    else if(p==2) cout<<6<<endl;
    else{
        cout<<2*(q-1+l1+n-r1-1)<<endl;
    }



    }
}