#include<bits/stdc++.h>
using namespace std;
int main(){

//use a map to store the pair 
// sort the map based on max points 
// next calculate the questions to attempt so tht total mins is 240
	
	int t,a,b,c,x,y,z;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		cin>>x>>y>>z;
		//100%6
		int maximum=(x>y)?(x>z)?x:z:y>z?y:z;
		cout<<maximum<<endl;
	}

	return 0;

}