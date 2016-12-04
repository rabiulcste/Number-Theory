#include <bits//stdc++.h>
using namespace std;
#define MAX 1000001
char flag[MAX];
int pr[MAX];

void sieve()
{
    int c = 0;
    pr[++c] = 2;
    for(int i= 4; i <= sqrt(MAX); i +=2){
        flag[i] = 1;
    }

    for(int i = 3; i <= sqrt(MAX); i += 2){
        if(flag[i] == 0){
                pr[++c] = i;
            for(int j = i+i; j <= MAX; j += i){
                flag[j] = 1;
            }
        }
    }

    return;
}

int ok(int n)
{
    int div = 1;
    for(int j=1; pr[j]*pr[j] <= n; j++)
    {
        if( n% pr[j] == 0)
        {
            int cnt = 0;
            while(n % pr[j] == 0)
            {
                n /= pr[j]; cnt++;
            }
            div = div * ++cnt;
        }
    }
    if(n > 1) div *= 2;
    return div;
}

int main()
{
    sieve();
    int n;
    while(cin >> n) {
        printf("%d\n", ok(n));
    }
    return 0;
}
