#include<bits/stdc++.h>
using namespace std;
void magicalPark(char a[][100],int m,int n,int k,int s)
{
	bool success=true;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			char ch=a[i][j];
			if(k>s)
			{
				success=false;
				break;
			}
				
			else
			if(ch=='.')
			{
				s-=2;
				
				
           }
		   else
		      if(ch=='*')
			  {
				  s+=5;
				  
			  }
			  else
			  {
				  break;
			  }
			  if(j!=n-1)
			  {
				  s-=1;
			  }
		}
		
	}
	if(success)
	{
		cout<<"Yes"<<endl;
		cout<<s<<endl;
	}
	else
	{
		cout<<"No";
	}
}
int main() 
{
	int m, n, k, s;
    cin>>m>>n>>k>>s;
	char a[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	magicalPark(a,m,n,k,s);
	return 0;
}