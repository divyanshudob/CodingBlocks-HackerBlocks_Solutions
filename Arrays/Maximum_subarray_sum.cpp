#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int cs=0;
		long long int ms=0;
		for(int i=0;i<n;i++)
		{
			
			cs=cs+a[i];
			if(cs<0)
			{
				cs=0;
			}
			else
			{
				ms= max(cs,ms);
			}
		}
		cout<<ms<<endl;
	}
	return 0;
}