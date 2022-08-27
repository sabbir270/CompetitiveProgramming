#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m;i++)
        cin >> a[i];
    long long int sum = a[0] - 1;
    for (int i = 1; i < m;i++)
    {
        if(a[i-1]<a[i])
            sum = sum + a[i] - a[i - 1];
        else if(a[i-1]==a[i])
        {}
        else if(a[i-1]>a[i])
            sum = sum + n - a[i - 1] + a[i];
    }
    cout << sum;
}