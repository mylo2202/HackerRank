#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n], height = 0, candles = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(height < a[i]) height = a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i] == height) candles++;
    }
    cout << candles << endl;

    return 0;
}
