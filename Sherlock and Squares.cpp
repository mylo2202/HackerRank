#include <iostream>
#include <cmath>

using namespace std;

bool isSquare(int n)
{
    if (sqrt(n) * sqrt(n) == n) return true;
    else return false;
}

int main()
{
    int testcases, query;
    cin >> testcases;
    int result[testcases];
    for(query = 0; query < testcases; query++)
    {
        int a, b, squares = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++) if(isSquare(i)) squares ++;
        result[query] = squares;
    }
    for(query = 0; query < testcases; query++) cout << result[query] << "\n";
    return 0;
}
