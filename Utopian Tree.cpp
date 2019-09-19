#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    int n;
    while (T--) {
        cin >> n;
        int h = 1;
        int t = 1;
        while (n--) {
        if (t) {
            h = h * 2;
            t--;
        } else {
            h = h + 1;
            t++;
        }
        }
        cout << h << endl;
    }

  return 0;
}
