#include<iostream>
using namespace std;
int ans(string s,int n,char ch)
{
	int left=0;
	int right=0;
	int count=0;
	int ans=0;
	for(right;right<s.length()-1;right++){
		if(s[right]!=ch){
			count++;
		}
		if(count==n){
           break;
		}
	}
   while(left<right){
	   while(s[right+1]==ch && right<s.length()-1){
		   right++;
	   }
	   int currlen=right-left+1;
	   ans= max(ans,currlen);
	   left++;
	   if(s[left-1]!=ch && right<s.length()-1){
		   right++;
	   }
   }
  return ans;
}
 int main(){
	 int n;
	 cin>>n;
	 string s;
	 cin>>s;
	 if(n>s.length()){
		 cout<<s.length();
		 return 0;
	 }
	 int ansa=ans(s,n,'a');
	 int ansb=ans(s,n,'b');
	 cout<<max(ansa,ansb);
	 return 0;
 }