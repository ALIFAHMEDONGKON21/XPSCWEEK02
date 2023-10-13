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



int main(){
    
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int minx= min(a, min(b, c));
        int count = 0;
        bool res = true;

        while (a != minx) {
            if (a % minx != 0 || count > 3) {
                res = false;
                break;
            }
            a -= minx;
            count++;
        }

        while (b != minx) {
            if (b % minx != 0 || count > 3) {
                res = false;
                break;
            }
            b -= minx;
            count++;
        }

        while (c != minx) {
            if (c % minx!= 0 || count > 3) {
                res = false;
                break;
            }
            c -= minx;
            count++;
        }

        if (count > 3) {
            res = false;
        }

        cout << (res ? "YES" : "NO") << endl;
    }

    
    return 0;
}