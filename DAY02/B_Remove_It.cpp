#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;

    cin>>a>>b;

    vector<int>v;
    while (a--)
    {
        /* code */
        int x;
        cin>>x;
        if(x!=b)
        {
            v.push_back(x);

        }
    }
    for(int i=0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}