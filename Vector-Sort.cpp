#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;

    int i, x;
    vector<int> v;
    for(i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(i=0; i<n; i++) cout << v[i] << " ";
    return 0;
}

