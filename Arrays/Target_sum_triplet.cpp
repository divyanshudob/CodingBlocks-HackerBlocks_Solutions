#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum;
    cin>>sum;
 for(int i=0;i<n-2;i++)
 { 
     for(int j=i+1;j<n-1;j++)
     {
       int k=n-1;
       
       while(j<k)
       {
           int csum=a[i]+a[j]+a[k];
           if(csum==sum)
           {
               cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
               j++;
               k--;
           }
           else
           
               if(csum>sum)
               {
                   k--;
               }
               else
                   if(csum<sum)
                   {
                       j++;
                   }
               
        }
        
     }
 }
 return 0;
}