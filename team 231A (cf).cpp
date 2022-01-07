#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
int count=0;
while(t>0){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b==2||b+c==2||a+c==2){
		count++;
	}
	t--;
}
cout<<count;
return 0;
}

