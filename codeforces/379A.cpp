#include<iostream>
using namespace std;
int main()
{
    int a, b,total;
    cin >> a >> b;
    total = a;
    while(a>=b)
    {
        total = total + (a/b);
        a = (a/b) + (a % b);
    }
    cout << total;
}