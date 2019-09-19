#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[26];
    for(int i = 0; i < 26; i++) cin >> a[i];
    string str;
    cin >> str;
    int r = 0;
    for(int i = 0; i < str.size(); i++) r = max(r,a[str[i]-'a']);
    cout << (str.size()) * r << endl;
}
