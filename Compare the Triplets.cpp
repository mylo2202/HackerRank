#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], b[3], i, alice = 0, bob = 0;
    for(i=0; i<3; i++) cin >> a[i];
    for(i=0; i<3; i++) cin >> b[i];
    for(i=0; i<3; i++)
    {
        if(a[i] > b[i]) alice++;
        if(a[i] < b[i]) bob++;
    }
    cout << alice << " " << bob << endl;

    return 0;
}
