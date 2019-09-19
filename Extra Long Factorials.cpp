#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000] = {1};
    int length = 1;
    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (int j = 0; j < length; j++)
        {
            int multiplier = i * arr[j] + carry;
            int dig = multiplier % 10;
            arr[j] = dig;
            carry = multiplier / 10;
        }

        while (carry) {
           length++;
           int dig = carry % 10;
           arr[length - 1] = dig;
           carry /= 10;
        }
    }

    for (int i = length - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}
