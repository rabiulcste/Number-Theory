#include <bits//stdc++.h>

using namespace std;

int len, sum;

string small()
{
    int L = len, S = sum;
    string ret;
    while(L > 0) {
        for(int i = (L == len ? 1 : 0); i <= 9; i++) {
            if(S - i <= (L - 1) * 9) {
                ret += char('0' + i);
                L--;
                S -= i;
                break;
            }
        }
    }
    return ret;
}

string big()
{
    int L = len, S = sum;
    string ret;
    while(L > 0) {
        ret += char('0' + min(9, S));
        L--;
        S -= min(9, S);
    }
    return ret;
}

int main()
{
    cin >> len >> sum;
	if(sum == 0) {
		if(len == 1)
			cout << "0 0" << endl;
		else
			cout << "-1 -1" << endl;
	}
	else {
		if(sum > len * 9)
			cout << "-1 -1" << endl;
		else
			cout << small() << " " << big() << endl;
	}

    return 0;
}
