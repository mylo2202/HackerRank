#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int pos, start_pos, end_pos;
    cin >> pos >> start_pos >> end_pos;
    v.erase(v.begin() + (pos - 1));
    v.erase(v.begin() + (start_pos - 1), v.begin() + (end_pos - 1));
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    return 0;
}

