#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, x, m;
    cin >> n >> q;
    vector< vector<int> > a;
    for(int i=0; i<n; i++)
    {
        cin >> m;
        vector<int> k;
        for(int j=0; j<m; j++)
        {
            cin >> x;
            k.push_back(x);
        }
        a.push_back(k);
    }
    int c[q], d[q];
    for(int i=0; i<q; i++) cin >> c[i] >> d[i];
    for(int i=0; i<q; i++) cout << a[c[i]][d[i]] << endl;

    return 0;
}

