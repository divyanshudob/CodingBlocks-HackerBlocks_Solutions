#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	string s,u;
	cin>>t;
	while(t--)
	{
		cin>>s>>u;
	    int n=s.length();
		int b[n];
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==u[i])
			{
				b[i]=0;
			}
			else
			{
				b[i]=1;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<b[i];
		}
		cout<<endl;
	}
	return 0;
}