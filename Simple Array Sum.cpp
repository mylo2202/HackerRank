#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], i, sum = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
}
