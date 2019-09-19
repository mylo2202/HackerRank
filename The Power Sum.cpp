#include <iostream>
#include <cmath>
using namespace std;

int countSum(int x, int n, int a)
{
    if(pow(a, n) < x)
        return countSum(x, n, a+1) + countSum(x-pow(a, n), n, a+1);
    else if(pow(a, n) == x)
        return 1;
    else
        return 0;
}

/*int countSum(int x, int n, int a) {
    int i_pow = pow(a,n);
    if (i_pow > x)
        return 0;
    else if (i_pow == x)
        return 1;
      // subproblem
    return powerSum(x, n, a+1) + powerSum(x-i_pow, n, a+1);
}*/

int main()
{
    int x, n, a = 1;
    cin >> x >> n;
    cout << countSum(x, n, a);
    return 0;
}

