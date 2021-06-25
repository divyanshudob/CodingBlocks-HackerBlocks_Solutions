#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 100000007

int circular_sum(int *a, int n,int total){

   int max1=0;
   int csum=0;

   for(int i=0;i<n;i++){

      csum+=a[i];
      csum=max(csum,0);
      max1=max(csum,max1);
   }
   for(int i=0;i<n;i++){
      a[i] *= -1;

   }
   csum = 0;
   int max2=0;
   for(int i= 0;i<n;i++){
      csum+=a[i];
      max2 = max(max2,csum);
      csum = max(csum,0);
   }
   
   int max3 = total - (-1 * max2);
   return max(max1,max3);
}
int main(){
   
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int t;
cin>>t;

while(t--){
   int n;
   cin>>n;

   int a[n];
   int total = 0;
   for(int i=0;i<n;i++){
      cin>>a[i];
      total += a[i];
   }
   int ans = circular_sum(a,n,total);
   cout<<ans<<endl;
}





return 0;
}