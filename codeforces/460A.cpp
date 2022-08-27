#include<iostream>
using namespace std;
int main()
{
    int n, m,result,x=-1,prev_n;
    cin >> n>> m;
     prev_n = n;
    if(n<m)
        cout << n;
    else
    {
        while(true)
        {
            result = n / m;
            if(result==x)
            {
                cout << n;
                break;
            }
            n = result + prev_n;
            x = result;
        }
    }
}