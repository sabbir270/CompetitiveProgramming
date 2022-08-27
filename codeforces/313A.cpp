#include<iostream>
using namespace std;
int main()
{
    int n,last_digit,Before_last_digit,balance;
    cin >> n;
    if(n>0)
        cout << n;
    else
    {
        last_digit = (n % 10)*(-1);
        Before_last_digit = ((n / 10) % 10)*(-1);
        if(last_digit>=Before_last_digit)
        {
            balance = n / 10;
            cout << balance;
        }
        else
        {
            n = (n / 10) / 10;
            balance = (n * 10)-last_digit;
            cout << balance;
        }

    }
}