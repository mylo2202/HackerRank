#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    int p=1, i;
        for(i=2; i<=n; i++)
        {
            p=i;
            if(n%i==0) break;
            else continue;
        }
    if (p==n && p!=1) return true;
    else if (p!=n || p==1) return false;
}


int main() {
    int T;
    cin >> T;
    int a[T], i;
    for(i=0; i<T; i++) cin >> a[i];
    for(i=0; i<T; i++) if(isPrime(a[i])) cout << "Prime" << endl;
    else cout << "Not prime" << endl;
    return 0;
}

