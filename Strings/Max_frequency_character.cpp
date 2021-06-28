#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string s,ch;
	cin>>s;
	 
	int max=0;
	for(int i=0;i<s.length();i++)
	{
		int d= count(s.begin(),s.end(),s[i]);
		if(d>max)
		{
			max=d;
			ch=s[i];
		}
	}
	cout<<ch<<endl;
	return 0;
}