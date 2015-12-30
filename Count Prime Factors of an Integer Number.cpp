#include <bits//stdc++.h>

using namespace std;

int primeFactors(int n)
{
    set<int>cnt;
    while (n%2 == 0)
    {
        cnt.insert(2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            cnt.insert(i);
            n = n/i;
        }
    }

    if (n > 2)
        cnt.insert(n);

    return cnt.size();
}


int main()
{
    int n; cin>>n;
    cout<<primeFactors(n)<<endl;
    return 0;
}
