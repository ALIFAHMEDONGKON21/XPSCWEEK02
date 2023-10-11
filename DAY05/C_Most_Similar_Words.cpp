#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     all(x)                          x.begin(),x.end()
#define     forI                             (i,s,n) for(int i=s; i<n; i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//

int call(string x, string y)
{
    int res=0;
    int n=x.size();

    for(int i=0; i<=n-1; i++)
    {
        res+=abs(x[i]-y[i]);
    }
    return res;
}

int main(){
    
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        string s[n];

        for(int i=0; i<=n-1; i++)
        {
            cin>>s[i];
        }

        int ans=INT_MAX;

        for(int i=0; i<=n-1; i++)
        {
            for(int j=i+1; j<=n-1; j++)
            {
                ans=min(ans,call(s[i],s[j]));
            }
        }
        /* code */
        cout<<ans<<endl;
    }
    
    return 0;
}