
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,t;
    cin >> t;
    for (int k = 0; k < t;k++)
    {
        cin >> n;
        for (i = 2; i < 30;i++)
        {
            int z = (pow(2, i) - 1);
            if ( n % z== 0)
            {
                int x = n / (pow(2, i) - 1);
                cout << x<<endl;
                break;
            }
        }
    }

}

