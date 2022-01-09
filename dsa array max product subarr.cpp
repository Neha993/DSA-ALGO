#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=a[0];
	int ma=ans;
	int mi=ans;
	for(int i=1;i<n;i++){
		if(a[i]<0){
			swap(ma,mi);
		}
		ma=max(a[i],ma*a[i]);
		mi=min(a[i],mi*a[i]);
		ans=max(ans,ma);
	}
	cout<< ans;
	return 0;
	
}
