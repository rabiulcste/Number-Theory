#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define MAX 1000001

char prime[MAX];

void sieve()
{
    int i, j, x, n, p;
    n = MAX;
    x=sqrt(n);
    prime[0] = prime[1] = 1;
    for(i=4; i<=n; i+=2){
        prime[i] = 1;
    }

    for(i = 3; i <= x; i += 2){
        if(prime[i] == 0){
            for(j = i+i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
    return;
}

int main()
{
    int num;
    sieve();
    cin>>num;
    if(prime[num]==0)
        cout<<num<<" is a prime number."<<endl;
    else
        cout<<num<<" is not a prime number"<<endl;
   return 0;
}

