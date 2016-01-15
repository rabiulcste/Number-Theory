/*
You're given a number X represented in base bx and a number Y represented in base by. 
Compare those two numbers.

Input
The first line of the input contains two space-separated integers n and bx (1≤n≤10, 2≤bx≤40), 
where n is the number of digits in the bx-based representation of X.

The second line contains n space-separated integers x1,x2,...,xn (0≤xi<bx) — the digits of X. 
They are given in the order from the most significant digit to the least significant one.

The following two lines describe Y in the same way: the third line contains two space-separated integers m and by (1≤m≤10, 2≤by≤40, bx≠by), 
where m is the number of digits in the by-based representation of Y, 
and the fourth line contains m space-separated integers y1,y2,...,ym (0≤yi<by) — the digits of Y.

There will be no leading zeros. Both X and Y will be positive. 
All digits of both numbers are given in the standard decimal numeral system.

Output
Output a single character (quotes for clarity):

'<' if X<Y
'>' if X>Y
'=' if X=Y
*/
#include <bits//stdc++.h>
using namespace std;
typedef long long int i64;

i64 pwr(int n, int p){
    i64 ret = 1;
    while(p--){
        ret*=1ll*n;
    }
    return ret;
}
int main()
{
    int n, x;
    cin>>n>>x;
    i64 num1 = 0;
    for(int i = 1; i <= n; i++) {
        int y;
        cin>>y;
        num1 += y * pwr(x, n-i);
    }

    cin>>n>>x;
    i64 num2 = 0;
    for(int i = 1; i <= n; i++) {
        int y;
        cin>>y;
        num2 += y * pwr(x, n-i);
    }
    //cout<<num1<<" "<<num2<<endl;
    if(num1 == num2) cout<<"=\n";
    else if(num1 > num2) cout<<">\n";
    else cout<<"<\n";
    return 0;
}
