#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vi vector<int>
#define vll vector<ll>


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y>>a>>b;
        int res=0;
        int flag=1;
        int movx=1,movy=1;

        while(x!=a&&y!=b){
            if(y+movy==n||y+movy==1||y+movy==m){
                res++;
                x+=movx;
                y+=movy;
                movy=(-1)*(movy);
            }
            else if(x+movx==1||x+movx==m||x+movx==n){
                res++;
                x+=movx;
                y+=movy;
                movx=(-1)*(movx);
            }
            else{
            x+=movx;
            y+=movy;
            res++;
        }
            
        }
        cout<<res<<endl;
    }

}