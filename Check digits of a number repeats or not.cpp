#include <bits//stdc++.h>
using namespace std;
bool verify(long long n)
{
    int mark = 0,t;
    while(n>0)
    {
        t = n%10;
        n/=10;
        if(mark&(1<<t))
            return 0;
        mark|=1<<t;
    }
    return 1;
}
int main()
{
    long long n;
    while(scanf("%lld", &n)==1){
        if(verify(n)) puts("No repeat");
        else puts("Repeated");
    }
}
