#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	map<int,int>m;
	int prefSum=0;
	for(int i=0;i<n;i++){
		prefSum+=a[i];
		m[prefSum]++;
	}
	map<int,int>:: iterator it;
	int ans=0;
	for(it=m.begin();it!=m.end();it++){
		int c= it->second;
		ans+=(c*(c-1))/2;
		if(it->first==0){
			ans+=it->second;
		}
	}
	cout<<ans;
	return 0;
}
