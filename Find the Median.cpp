#include <bits/stdc++.h>

using namespace std;

int main() {
    int size, entry, sum = 0;
    cin >> size;
    vector<int> v(20001);
    
    for (int i = 0; i < size; i++) {
        cin >> entry;
        v[entry+10000]++;
    }
    
    for (int i = 0 ; i < v.size(); i++) {
        sum += v[i];
        if (sum > size/2) {
            cout << i - 10000 << endl;
            break;
        }
    }   
    return 0;
}
