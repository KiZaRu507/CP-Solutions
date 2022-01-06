#include<bits/stdc++.h>
#define pb push_back
#define ll long long int
#define vi vector<int>
using namespace std;
int main(){
    ll t,n,a;string s;
    cin>>t;
    while(t--){
        map<int,int> res;
        cin>>n;
        vi pred;
        for(int i=0;i<n;i++){
            cin>>a;
            pred.pb(a);
        }
        cin>>s;
        int count1;
        int count0;
        vi res1;vi res2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count1++;
                res1.pb(pred[i]);

            }
            else{
                count0++;
                res2.pb(pred[i]);}
        }

        vi vect;
        for(int j=0;j<count1;j++){
            for(int i=(n-count1)+1;i<=n;i++){
                    
                    res[res1[j]]=i;
            }
        }
        for(int j=0;j<count0;j++){
            for(int i=1;i<=count0;i++){
                
                res[res2[j]]=i;
            }
        }
        for(auto it=res.begin();it!=res.end();it++){
            cout<<it->second<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}