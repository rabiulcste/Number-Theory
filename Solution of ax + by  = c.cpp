#include <bits//stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for(int i=0; a*i <= c; i++){
        if((c-a*i)%b == 0){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}
