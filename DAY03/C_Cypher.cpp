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
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//



int main(){
    
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vi a(n);            cin_the_array(a,0,n-1);
        for(int i=0; i<=n-1; i++){
            int x;          cin>>x;
            string s;       cin>>s;
            for(auto c:s){
                if(c=='D'){
                    a[i]++;
                    if(a[i]==10)a[i]=0;
                }
                else{
                    a[i]--;
                    if(a[i]==-1)a[i]=9;
                }
            }
        }
        cout_the_array(a,0,n-1);
    }
    return 0;
}