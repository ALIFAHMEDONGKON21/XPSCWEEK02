#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
void solved()
{
    int n;
    cin>>n;
    int a[n];

    map<int,int>mp;
    int x;
    for(int i=0;i<n;i++)
   {
        cin>>x;
        mp[x]++;
   }
    int ans=mp.size();
    if((n-ans)%2)
        ans--;
    cout<<ans<<endl;
}
int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        solved();
    }

    return 0;
}