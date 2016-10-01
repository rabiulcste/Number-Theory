#include <bits//stdc++.h>
using namespace std;
#define mx 5000001
#define ll long long

int pr[mx];
ll s[mx];
int main()
{
    cin.sync_with_stdio(false);
	cin.tie(0);
    pr[1] = 1;
    for(int i=2; i<=mx; i++) {
        if(pr[i] == 0) {
            s[i]++;

            for(int j=i*2; j<=mx; j+=i) {
                int q = j;
                while(q%i == 0) {
                    s[j]++;
                    q/=i;
                }
                pr[j] = 1;
            }
        }
    }

    for(int i=2; i<=mx; i++)
        s[i] += s[i-1];

    int test;
    cin >> test;
    while(test--) {
        int a, b;
        cin >> a >> b;
        cout << s[a] - s[b] <<"\n";
    }
    return 0;
}
