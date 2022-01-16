#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mx=0,curr1=0,curr2=0;
	for(int i=0;i<n;i++){
	   if(i&1){
	   	curr1+=a[i];
	   }
	   else
	   curr2+=a[i];
	   int a=max(curr1,curr2);
	   if(a>mx){
	   	mx=a;
		    }
	   if(a==0){
	   	  curr1=0;
	   	  curr2=0;
	   }
	}
	cout<<mx;
	return 0;
}
