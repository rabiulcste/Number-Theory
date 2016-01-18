#include <bits//stdc++.h>

using namespace std;

long modu(string num, long m)
{
    long i, rem;

    for (i = 0, rem = 0; num[i]; i++)
    {
        rem = rem * 10 + (num[i] - '0');
        rem %= m;
    }
    return rem;
}

int main()
{
    string s;
    long m;
    cin >> s >> m;
    cout << modu(s, m) << endl;

    return 0;
}
