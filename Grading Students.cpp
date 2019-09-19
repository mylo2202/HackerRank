#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++) cin >> a[i];
    for(i=0; i<n; i++)
    {
        if(a[i] >= 38)
        {
            if(a[i] % 5 == 3 || a[i] % 5 == 4) a[i] += (5 - (a[i] % 5));
        }
        cout << a[i] << endl;
    }

    return 0;
}

