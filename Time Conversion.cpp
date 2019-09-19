#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hh, mm, ss;
    char M[3];

    scanf("%d:%d:%d%s", &hh, &mm, &ss, &M);

    if(strcmp(M, "AM") == 0)
    {
        if(hh == 12) hh = 0;
    }
    if(strcmp(M, "PM") == 0)
    {
        if(hh != 12) hh += 12;
    }

    cout << setw(2) << setfill('0') << hh << ":"
         << setw(2) << setfill('0') << mm << ":"
         << setw(2) << setfill('0') << ss << endl;

    return 0;
}
