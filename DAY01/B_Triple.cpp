#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    int t;
    cin>>t;

    
    while(t--)
    {
        int ans=-1;
        int n;
        cin>>n;
        
        map<int ,int>freq;

       for(int i=1; i<=n; i++)
        {
            int k;
            cin>>k;

           freq[k]++;

          if(freq[k]>=3)
          {
            ans=k;
          }
          
        }
        cout<<ans<<endl;
    }

    return 0;
}