#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[6][6];
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum, max_sum = a[0][0] + a[0][1] + a[0][2] + a[1][1] + a[2][0] + a[2][1] + a[2][2];
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            sum = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
            if(max_sum < sum) max_sum = sum;
        }
    }
    cout << max_sum;
    return 0;
}
