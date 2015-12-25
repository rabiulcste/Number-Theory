#include <cstdio>
#include <cmath>
#define SIZE_N 32000
#define SIZE_P 3432
using namespace std;

int flag [SIZE_N];
int prime [SIZE_P];

void seive()
{
    int i, j, r, c = 0, p;

    flag [2] = false ;
    prime [++c] = 2 ;
    p = SIZE_N + 1;
    for(i = 3; i < p; i += 2 )
    {
        if (!flag[i])
        {
            prime[++c] = i;
            if (SIZE_N / i >= i)
            {
                r = i * 2 ;
                for(j = i * i; j <p; j += r)
                    flag[j] = true;
            }
        }
    }
}


int devisor(int i)
{
    int n, j, count, m, div;

    n=sqrt(i); m = i;  div = 1;
    for(j=1; prime[j] <= n; j++)
    {
        if(m%prime[j] == 0)
        {
        count=0;
        while(m%prime[j] == 0)
        {
            m/=prime[j]; count++;
        }
            n=sqrt(m);
            div=div * ++count;
        }
    }
    if(m!=1) div *= 2;
    return div;
}


int main()
{
    seive();
    int i, n;
    while(scanf("%d", &n)==1)
    {
        printf("%d No of divisor: %d\n", n, devisor(n));
    }
    return 0;
}
