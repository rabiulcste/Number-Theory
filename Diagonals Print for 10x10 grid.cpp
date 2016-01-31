#include <bits//stdc++.h>

using namespace std;

int main()
{
    // 10 x 10 diagonal printing
    int x, y;
    for(int i=1; i<=10; i++)
    {
        x = 1; y = i;
        while(x<=10 and y<=10)
        {
            cout << x << "," << y<<" ";
            x++,y++;
        }
        puts("");
    }
    puts("");
    for(int i=2; i<=10; i++)
    {
        int x = i;
        int y = 1;
        while(x<=10 and y<=10)
        {
            cout << x << "," << y<<"  ";
            x++,y++;
        }
        puts("");
    }
    puts("");

    for(int i=1; i<=10; i++)
    {
        x = 1; y = i;
        while(x>=1 and x<=10 and y>=1 and y<=10)
        {
            cout << x << "," << y<<"  ";
            x++,y--;
        }
        puts("");
    }
    puts("");
    for(int i=2; i<=10; i++)
    {
        x = i; y = 10;
        while(x>=1 and x<=10 and y>=1 and y<=10)
        {
            cout << x << "," << y<<"  ";
            x++,y--;
        }
        puts("");
    }
    puts("");
    return 0;
}
