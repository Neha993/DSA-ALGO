#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	string s1="aoyeui";
	int count;
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
		 count=0;
		for(int j=0;j<s1.length();j++){
			if(s[i]==s1[j]){
				count++;
				break;
			}
			
		}
	
	if(count==0){
				cout<<"."<<s[i];
			}
}
	return 0;
}
