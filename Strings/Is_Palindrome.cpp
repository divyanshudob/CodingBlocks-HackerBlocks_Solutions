#include<bits/stdc++.h>
using namespace std;
int ispalindrome(int *a,int lb, int ub)
{   
    if (lb > ub) {
        return 1;
    }
	if(a[lb]==a[ub])
	{
		return ispalindrome(a,lb+1,ub-1);	
	}
	else
	  {
		  return 0;
	  }
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int res= ispalindrome(a,0,n-1);
	if(res==0)
	{
		cout<<"false";
	}
	else
	{
	   cout<<"true";
	}

	return 0;
}