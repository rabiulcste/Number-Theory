/* Problem - UVa 10490
There are a lot of Abul Kalam Azad in Bangladesh. But, why is he so special? 
Not that he is my dad is the only reason. He can wonderfully do some calculation. If anyone 
gives him any positive integer k, he amazingly can say the relative perfect number 2^k−1*(2^k − 1) 
without using neither calculator nor computer. Say, I have told him to find out the relative 
perfect number of 2, he replies 6 which is a perfect number. But perfect is not possible 
for all the integers. I have asked him the process, but he says that I should find this 
thing out by myself how an integer is related to a perfect number. Anyway, I have challenged 
him that it is very possible for me to do the same calculation using a computer. Although 
I could not figure out how he can do this, I know that the next ACM Online Programming
Contest is near at hand and World’s top programmers are available to solve my very simple problem.
Now, you are to write a program for me to win over my dad, which will take input n, and determine
the perfect number p.

Input
An integer 1 < n ≤ 31 is given in each input line.

Output
Output will be in the following format:
• If perfect number is possible
Perfect: p!
• If perfect number is not possible, but given number is prime
Given number is prime. But, NO perfect number is available.
• If perfect number is not possible and given number is not prime
Given number is NOT prime! NO perfect number is available.

Sample Input
2
3
6
0

Sample Output
Perfect: 6!
Perfect: 28!
Given number is NOT prime! NO perfect number is available.
*/
#include <bits//stdc++.h>
using namespace std;
#define pow(base,power) pow(base+0.0,power)

int is_prime(int n) {
    int i, prime = 1;
    for (i=3; i<=sqrt(n); i+=2) {
        if ((n % i) == 0) {
            prime = 0;
            break;
            }
        }
    if ((n%2 !=0 && prime && n > 2) || n == 2) {
            return 1;
    }
    return 0;
}

int main()
{
    int i, j, num, topo;
    long long per;
    while(scanf("%d", &num) && num != 0){
        if(is_prime(num)) {
            topo = pow(2, num) - 1;
            if(is_prime(topo)){
                per = (pow(2, num) - 1)* pow(2, num-1);
                printf("Perfect: %lld!\n", per);
            }
            else
                printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
