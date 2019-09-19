#include <iostream>

using namespace std;

int main() {
    short int n, pairs = 0;
    cin >> n;
    short int sock[n];
    for (int i = 0; i < n; ++i)
        cin >> sock[i];

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
        if (sock[j] < sock[i]) {
            short int tmp = sock[j];
            sock[j] = sock[i];
            sock[i] = tmp;
            }
        }
    }
    for (int i = 0; i < n - 1; ++i)
        if (sock[i] == sock[i + 1])
            pairs++, i++;

    cout << pairs << endl;
    return 0;
}
