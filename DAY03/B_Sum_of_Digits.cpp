#include<bits/stdc++.h>
#define forI(i,s,n) for(int i=s; i<n; i++)
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    while (n.length() > 1) {
        int sum = 0;

        for (char digit : n) {
            sum += digit - '0';
        }

        n = to_string(sum);

        count++;
    }

    cout << count << endl;

    return 0;
}
