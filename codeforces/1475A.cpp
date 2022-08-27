#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin >> t;
    while(t!=0)
    {
        cin >> n;
        if((n&(n-1))!=0)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
        t--;
    }
}