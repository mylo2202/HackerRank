#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int k,n,q;
    cin >> n >> k >>q;
    k=k%n;
    long long int i, arr[n], x, s=0;
    for(i=0;i<n;i++)
        cin >> arr[i];
    for(i=0; i<q; i++)
    {
        cin >> x;
        s = n - k + x;
        if(s < n)
            cout << arr[s] << endl;
        else if(s >= n)
        {
            s -= n;
            cout << arr[s] << endl;
        }
    }
    return 0;
}
