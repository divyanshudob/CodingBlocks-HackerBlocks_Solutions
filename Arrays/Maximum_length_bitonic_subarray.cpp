#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 100000007
int max_bit(int a[], int n){

  int left[n];
  int right[n];

  left[0]=1;
  right[n-1]=1;

  for(int i=1;i<n;i++){

     if(a[i]>=a[i-1]){

      left[i]=left[i-1]+1;

     }

     else
      left[i] = 1;
   }
   
   for(int i=n-2;i>=0;i--){

     if(a[i]>=a[i+1]){

      right[i]=right[i+1]+1;

     }

     else
      right[i] = 1;
   }

   int ans = 0;

   for(int i=0;i<n;i++){

      int curr = left[i]+right[i]-1;
      ans = max(curr,ans);
   }

 return ans;

}
int main(){
   
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

 int t;
 cin>>t;
 while(t--){
   int n;
   cin>>n;

   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }

   int ans = max_bit(a,n);
   cout<<ans<<endl;
 }





return 0;
}