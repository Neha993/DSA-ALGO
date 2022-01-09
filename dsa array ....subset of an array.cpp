#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	unordered_map<int,int>mp;
   for(int i=0;i<m;i++){
       mp[a[i]]=1;
   }
   
   for(int i=0;i<n;i++){
       if(mp[b[i]]==0)
           cout<< "No";
   }
   for(int i=0;i<n;i++){
   	if(mp[b[i]]==1)
   	
   }
cout<<yes

	return 0;
}
