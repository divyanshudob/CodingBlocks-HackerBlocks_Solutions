#include <iostream>
using namespace std;
int  matrixSearch(int a[][30],int m, int n,int key)
{
   int i=0,j=n-1;
   while(i<m&&j<n)
   {
       if(a[i][j]==key)
       {
           return 1;
       }
       else
         if(a[i][j]<key)
         {
             i++;
         }
         else
         {
             if(a[i][j]>key)
             {
                 j--;
             }
         }
   }
   return 0;
}

int main() {
    int m,n;
    cin>>m>>n;
    int a[30][30];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    int res=matrixSearch(a,m,n,key);
    cout<<res<<endl;
    return 0;

}