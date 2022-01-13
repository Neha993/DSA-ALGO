#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	vector<int>v;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			v.push_back(a[i][j]);
		}
	}
	sort(v.begin(),v.end());
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=v[c++];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
