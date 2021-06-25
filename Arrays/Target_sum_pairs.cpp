#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s;
	cin>>s;
	sort(a,a+n);
	int i=0;
	int j=n-1;
	while(i<j)
	{
		int cs=a[i]+a[j];
		if(cs>s)
		{
			j--;
		}
		else
		 if(cs<s)
		 {
			 i++;
		 }
		 else
		   if(cs==s)
		   {
			   cout<<a[i]<<" and "<<a[j]<<endl;
			   i++;
			   j--;
		   }
	}
     return 0;
}