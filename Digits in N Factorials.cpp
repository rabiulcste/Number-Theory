#include <iostream>
#include <cmath>
#include <cstdio>

double count_digit(long a) {
    double sum;
    long i;
    if(a==0) return 1;
    else
    {
        sum=0;
        for(i=1;i<=a;i++){
            sum+=log10(i);
        }
        return floor(sum)+1;
    }
}

int main() {
    double sum;
    long n;
    while(scanf("%ld", &n) == 1) {
        sum = count_digit(n);
        printf("%.0lf\n", sum);
    }
    return 0;
}
