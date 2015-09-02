#include <bits//stdc++.h>

using namespace std;

string add(char a[], char b[])
{
    int i, j, carry, k, t1, t2;
    char res[1010];
    int len1 = strlen(a);
    int len2 = strlen(b);

    carry = k = 0;

    for(i = len1 - 1, j = len2-1; i >= 0 || j >= 0; i--, j--)
    {
        t1 = t2 = 0;
        if(i >= 0) t1 = a[i] - '0';
        if(j >= 0) t2 = b[j] - '0';

        res[k++] = ((t1 + t2 + carry)%10) + '0';
        carry = (t1 + t2 + carry) / 10;
    }

    while(carry != 0)
    {
        res[k++] = (carry % 10) + '0';
        carry /= 10;
    }
    res[k] = '\0';
    reverse(&res[0], &res[k]);
    return res;
}

int main()
{
    char a[1000], b[1000];
    string res;
    while(scanf("%s %s", a, b)==2){
    res = add(a, b);
    cout<<res<<endl;
    }
    return 0;
}
