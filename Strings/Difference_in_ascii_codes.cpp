#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int n=strlen(s);
    for(int i=0;i<=n-2;i++)
    {
         int diff= (int) s[i+1]- (int) s[i];
         cout<<s[i]<<diff;

    }
    cout<<s[n-1];
}