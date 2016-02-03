/*  Brian Kernighan’s Algorithm - 
   1  Initialize count: = 0
   2  If integer n is not zero
      (a) Do bitwise & with (n-1) and assign the value back to n
          n: = n&(n-1)
      (b) Increment count by 1
      (c) go to step 2
   3  Else return count
*/
#include <bits//stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    while(n)
    {
        n &= (n-1);
        cnt++;
    }
    cout << cnt <<endl;
    return 0;
}
