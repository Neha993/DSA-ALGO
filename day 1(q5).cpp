//Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxtillhere=0,mx=0;
	for(int i=0;i<n;i++){
	 maxtillhere+=a[i];
	 if(maxtillhere>mx){
	 	mx=maxtillhere;
	 }
	 else if(maxtillhere<0){
	 	maxtillhere=0;
	 }
	}
	cout<<mx;
	return 0;
}
