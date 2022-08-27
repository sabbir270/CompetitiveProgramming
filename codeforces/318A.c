#include<stdio.h>
int main()
{
    long long int n, k,pos;
    scanf("%lld %lld", &n, &k);
    long long int num_of_even = n / 2;
    long long int num_of_odd = n-num_of_even;
    if(k<=num_of_odd)
        pos = k * 2 - 1;
    else
        pos = (k - num_of_odd) * 2;
    printf("%lld", pos);
}