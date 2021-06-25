#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;
	char rev;
	int n;
	for(int i=0;i<str.length();i++){
	n=9-((int)str[i]-48);
	n=9-n;
	n=57-n;
	rev=(char)n;
	if(str[i]>rev){
        str[i]=rev;
	}
	if(str[0]=='0'&& i==0){
		str[0]='9';
	}
	}
	cout<<str;

	return 0;
}