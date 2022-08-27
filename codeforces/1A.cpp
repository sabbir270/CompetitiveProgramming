#include<iostream>
using namespace std;
int main()
{

    long long int n, m, a,res, res2;
    cin >> n >> m >> a;
    res = n / a;
    if(n%a!=0)
        res++;
    res2 = m / a;
    if(m%a!=0)
        res2++;
    cout << res * res2;
}