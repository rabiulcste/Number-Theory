#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;
#define i64 long long

i64 M;
i64 powermodulo(i64 N, i64 P)
{
    if(P == 0) return 1;

    if(P%2 == 0)
    {
        i64 ret = powermodulo(N, P/2);
        return ((ret%M)*(ret%M)%M);
    }
    else return ((N%M)*(powermodulo(N, P-1)%M))%M;
}

int main()
{
    i64 n, p;
    cin>>n>>p>>M;
    cout<<powermodulo(n, p)<<endl;
}
