#include<iostream>
using namespace std;
int main()
{
    long long int x, y, a, b;
    int t;
    cin >> t;
    while (t!=0)
    {
        cin >> x >> y;
        cin >> a >> b;
        if(x==0 && y==0)
        {
            cout << "0"<<endl;

        }
        else if(a==b)
        {
            if(x==y)
            {
                long long int z = x * a;
                cout <<z<<endl;
              
            }
            else if(x<y)
            {
                long long int res = x * b;
                long long int res2 = res + (y - x) * a;
                cout << res2<<endl;
               
               
            }
            else if(x>y)

            {
                long long int res = y * b;
                long long int res2 = res + (x- y) * a;
                cout <<res2<<endl;
                
                


            }

        }

        else if(a*2>=b)
        {
            if(x==y)
            {
                cout << x * b<<endl;
                


            }
            else if(x<y)
            {
                long long int res = x * b;
                long long int res2 = res + (y - x) * a;
                cout << res2<<endl;
               
               

            }
            else if(x>y)

            {
                long long int res = y * b;

                long long int res2 = res + (x- y) * a;
                cout <<res2<<endl;
                
                


            }
            
        }
        else if(a*2<b)
        {

                cout << (x + y) * a<<endl;
                
                

        }
        t--;
    
    }
    
}