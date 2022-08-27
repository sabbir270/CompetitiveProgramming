#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t!=0)
    {
        cin >> n;
        int flag = -1, count = 0;
        while (true)
        {   if(n==1)
            {
                cout << "0" << endl;
                break;
            }

            if(n%6==0)
            {
                n = n / 6;
                count++;
                flag = 1;
                if(n==1)
                {
                    cout << count<<endl;
                    break;
                }
            }
            else
            {   
                if(flag==0)
                {
                    cout << "-1"<<endl;
                    break;
                }
                n = n * 2;
                count++;
                flag = 0;
            }

        }
        t--;
    }
    
}