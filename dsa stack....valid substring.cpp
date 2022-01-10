#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="(()))";
	int l=0,r=0,ml=0;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='('){
			l++;
		}
		if(s[i]==')'){
			r++;
		}
		if(l==r){
			ml=max(ml , 2*r);
		}
		else if(r>l){
			l=r=0;
		}
	}
	l=r=0;
	cout<<ml;
	return 0;
}
