#include<bits/stdc++.h>
using namespace std;
int trappedWater(int *building,int *left,int *right,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=min(left[i],right[i])-building[i];
    }
    return ans;
}
int main()
 {
	//code
	/*int t;
	cin>>t;
	while(t--)
	{*/
	    int n;
	    cin>>n;
	    int building[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>building[i];
	    }
	    int left[n]={0};
	    left[0]=building[0];
	    int j=1;
	    for(int i=1;i<n;i++)
	    {
	        left[j++]=max(building[i],left[i-1]);//added +1 
	        
	    }
	    int right[n]={0};
	    right[n-1]=building[n-1];
	    j=n-2;
	    for(int i=n-2;i>=0;i--)
	    {
	        right[j--]=max(building[i],right[i+1]);
	    }
	    int ans=trappedWater(building,left,right,n);
	    cout<<ans<<endl;
	
	return 0;
}