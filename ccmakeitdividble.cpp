#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string res,add;
		res="2";
		if(n==1){
			cout<<"3"<<endl;
			continue;
		}
		for(int i=2;i<n;i++){
			
			
			res+="0";
		}
		res+="1";
		
		cout<<res<<endl;

	}
	return 0;
}