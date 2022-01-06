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

        if(x>a&&y>b){
            int stepy=(m-y)+(m-b);
            int stepx=(n-x)+(n-a);
            res=min(stepx,stepy);
        }
        else if(a>x&&b>y){
            int stepx=(a-x);
            int stepy=(b-y);
            res=min(stepx,stepy);
        }
        else if(a>x&&y>b){
            res=a-b;
        }
        else if(b>y&&a<x){res=b-y;}
        cout<<res<<endl;

    }

}