
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int count=1;
	for(int i=1;i<=s.length();i++)
	{
		if(s[i-1]==s[i])
		{
			count++;
		}
		else
		   {
			   cout<<s[i-1]<<count;
			   count=1;
		   }
	}
	return 0;
}