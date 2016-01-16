#include <bits//stdc++.h>

using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
typedef long long i64;

bool is_palindromic(i64 n)
{
	int m=0, a[20];
	for (;n>0; n/=10) a[m++]=n%10;
	REP(i, m/2) if (a[i]!=a[m-1-i]) return false;
	return true;
}

bool palin(int x)
{
    vector<int> v;
    while (x)
    {
        v.push_back(x%10);
        x/=10;
    }
    vector<int> v1;
    v1=v;
    reverse(v1.begin(),v1.end());
    return v1==v;
}

char s[10];
inline bool ispal(int x)
{
    sprintf(s, "%d", x);
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) if (s[i] != s[len - i - 1]) return false;
    return true;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	i64 p;
	int q, r;
	cin>>p>>q>>r;
	/// long long pallindrome
    cout<<is_palindromic(p)<<endl;
    /// int palindrome
	cout<<palin(q)<<endl;
	cout<<ispal(r)<<endl;
	return 0;
}
