#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    double positives = 0, negatives = 0, zeroes = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]>0) positives++;
        if(a[i]<0) negatives++;
        if(a[i]==0) zeroes++;
    }
    cout << fixed << setprecision(6) << positives/n << endl << negatives/n << endl << zeroes/n;
    return 0;
}
