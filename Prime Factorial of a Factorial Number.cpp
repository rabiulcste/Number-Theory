#include<bits/stdc++.h>

using namespace std;

int cnt[10];
void add(int x, int f)
{
    for(int i=2; x/i; i=i*2){
        cnt[2] += f*(x/i);
    }

    for(int i=3; x/i; i=i*3){
        cnt[3] += f*(x/i);
    }

    for(int i=5; x/i; i=i*5){
        cnt[5] += f*(x/i);
    }

    for(int i=7; x/i; i=i*7){
        cnt[7] += f*(x/i);
    }
}

int main()
{
    int n, m, x;
    while( cin>>n){
    memset(cnt, 0, sizeof cnt);
        add(n, 1);

    cout<<"2 ache "<<cnt[2]<<"ta\n3 ache "<<cnt[3];
    cout<<"ta\n5 ache "<<cnt[5]<<"ta\n7 ache "<<cnt[7]<<"ta"<<endl;
    }
    return 0;
}

