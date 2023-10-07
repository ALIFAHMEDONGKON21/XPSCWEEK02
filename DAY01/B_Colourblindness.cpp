#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;
int main(){
    
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        string a,b;         cin>>a>>b;
 
        for(int i=0;i<n;i++){
            if(a[i]=='B')a[i]='G';
            if(b[i]=='B')b[i]='G';
        }
 
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

    return 0;
}