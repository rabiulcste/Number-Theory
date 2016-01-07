#include <bits//stdc++.h>
using namespace std;
bool is_prime(int n) {
        bool prime = true;
        for (int i=3; i<=sqrt(n); i+=2) {
                if ((n % i) == 0) {
                        prime = false;
                        break;
                }
        }
        if ((n%2 !=0 && prime && n > 2) || n == 2) {
                return true;
        } else {
                return false;
        }

}

int main()
{
  int n;
  cin>>n;
  if(is_prime(n)) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
