#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[n];
	cin>>n;
for(int i=0;i<n;i++){
	cin>>a[i];
}
int k=0,l=0,m=0;
for(int i=0;i<n;i++){
	if(a[i]==0)
	k++;
	else if(a[i]==1)
	l++;
	else
	m++;
}
for(int i=0;i<k;i++){
	cout<<"0";
}
for(int i=k;i<k+l;i++){
	cout<<"1";
}
for(int i=k+l;i<n;i++){
	cout<<"2";
}
return 0;

}
