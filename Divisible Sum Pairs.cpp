#include <iostream>

using namespace std;

int main()
{
    int n, k, i, j, pairs = 0;
    cin >> n >> k;
    int a[n];
    for(i=0; i<n; i++) cin >> a[i];
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((a[i] + a[j]) % k == 0) pairs++;
        }
    }
    cout << pairs;
    return 0;
}
