#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j, a[n][n];
    for(i=0; i<n; i++) for(j=0; j<n; j++) cin >> a[i][j];
    int primaryDiagonal = 0, secondaryDiagonal = 0;
    for(i=0; i<n; i++) primaryDiagonal += a[i][i];
    for(i=0; i<n; i++) secondaryDiagonal += a[i][n-1-i];
    cout << abs(primaryDiagonal - secondaryDiagonal);
    return 0;
}

