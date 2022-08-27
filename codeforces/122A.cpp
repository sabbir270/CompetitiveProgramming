#include<iostream>
using namespace std;
int main()
{
    int n,flag=1,s;
    cin >> n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
    {
        cout << "YES";
    }
    else
    {
        while(n!=0)
        {
            s = n % 10;
            if(s==4 || s==7)
            {}
            else
            {
                flag = 0;
                cout << "NO";
                return 0;
                
            }
            n = n / 10;
            
        }
        
        if(flag==1)
            cout << "YES";
    }
}