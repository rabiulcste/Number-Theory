/* Problem - Codeforces 485 C
Let's denote as  the number of bits set ('1' bits) in the binary representation of the non-negative integer x.

You are given multiple queries consisting of pairs of integers l and r. For each query, find the x, such that l≤x≤r, 
and is maximum possible. If there are multiple such numbers find the smallest of them.
*/
#include <bits//stdc++.h>
using namespace std;
typedef long long int i64;

i64 l, r;
void solve()
{
    while((l|l+1) <= r){
        l = l|l+1;
    }
    cout << l << endl;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cin >> l >> r;
        solve();
    }
    return 0;
}


