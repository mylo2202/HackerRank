#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[100];

    for(int i=0; i<100; i++) b[i] = 0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    for(int i=0; i<100; i++) cout << b[i] << " ";

    return 0;
}

