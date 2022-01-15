#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	
	int m=s2.length();
     s1.insert(s1.end(),s1.begin(),s1.end());
	int n=s1.size();
	int j=0;
	for(int i=0;i<n;i++){
		if(s1[i]==s2[j])
		j++;
	}
	if(j==m){
	cout<<"yes"	;
	}
	else{ 
	cout<<"no";
	}

	return 0;
}
