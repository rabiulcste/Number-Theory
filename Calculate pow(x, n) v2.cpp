#include<bits//stdc++.h>

using namespace std;

int power(int x, unsigned int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;

}

int main()
{
    int x;
    unsigned int y;
    cin>>x>>y;
    printf("%d", power(x, y));
    return 0;
}
