// move all negative no ne side
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=-1;
	int pivot =0;
	for(int j=0;j<n;j++){
		if(a[j]<pivot){
			swap(a[i],a[j]);
			i++;
		}
	}

for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
