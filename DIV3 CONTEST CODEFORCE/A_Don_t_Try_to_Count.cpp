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

    
bool check(string& tmp, string& s) 
{
    return tmp.find(s) != std::string::npos;
}

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
      int n,m;
      cin>>n>>m;

      string x,s; 
      cin>>x>>s;

      string tmp = x;
      int cnt =0;
      int f = -1;

      for(int i=0; i<10; i++)
      {
        if(tmp == s) {f=1; break;}
        if(check(tmp,s))  {f=1; break;}
        tmp += tmp;
        cnt++;
        
      }
      
      if(f==-1) cout<<-1<<endl;
      else cout<<cnt<<endl;
    }
    return 0;
    
  
}